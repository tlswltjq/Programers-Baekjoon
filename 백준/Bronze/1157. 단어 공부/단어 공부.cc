#include <iostream>
#include <vector>
using namespace std;

vector<pair<char, int> > dict;

bool is_in(vector<pair<char, int> > dt, char c);

int main(){
    string txt;
    char cc;
    int count =0;
    int maxCount = 0;
    char maxChar;

    getline(cin, txt);
    for(char& c : txt){
        cc = toupper(c);
        if(is_in(dict, cc)){
            for (auto& node : dict) {
                if (node.first == cc) {
                    node.second++;
                    break;
                }
            }
        }else{
            dict.push_back(make_pair(cc, 1));
        }
    }
    
    for (const auto& node : dict) {
        if (node.second > maxCount) {
            maxCount = node.second;
            maxChar = node.first;
        } else if (node.second == maxCount) {
            maxChar = '?';
        }
    }

    cout << maxChar << endl;

    return 0;
}

bool is_in(vector<pair<char, int> > dt, char c){
    for (auto& node : dt){
        if(node.first == c){
            return true;
        }
    }
    return false;
}