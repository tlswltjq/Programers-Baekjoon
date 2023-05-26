#include <iostream>
#include <map>
using namespace std;

long long value = 0;
string color;

int main(){
    map<string, int> reg;
    reg["black"] = 0;
    reg["brown"] = 1;
    reg["red"] = 2;
    reg["orange"] = 3;
    reg["yellow"] = 4;
    reg["green"] = 5;
    reg["blue"] = 6;
    reg["violet"] = 7;
    reg["grey"] = 8;
    reg["white"] = 9;
    for(int i = 0 ; i<2; i++){
        value*=10;
        cin>>color;
        value+=reg[color];
    }
    cin>>color;
    for(int i = 0; i < reg[color];i++){
        value*=10;
    }
    cout<< value<<endl;
    return 0;
}