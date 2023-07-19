#include<iostream>
using namespace std;
char str[5][16];
int mx=0;
int main(){
    string s;
    for(int i = 0 ; i <5 ; i++){
        cin>> s;
        if (mx<s.length()){
            mx = s.length();
        }
        for(int j = 0 ; j < s.length(); j++){
            str[i][j]=s[j];
        }
    }

    for(int j = 0 ; j <mx; j++){
        for(int i = 0 ; i <5; i++){
            if(str[i][j]!=0){
                cout<<str[i][j];
            }
        }
    }
    return 0;
}