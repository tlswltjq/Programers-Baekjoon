#include <iostream>
using namespace std;

string str;
int cnt = 1;
int main(){
    cin>> str;
    for(char c : str){
        if(c==','){
            cnt++;
        }
    }
    cout<< cnt;
    return 0;
}