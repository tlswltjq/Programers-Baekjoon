#include <iostream>
using namespace std;

void string_analyze(string s);

int main(){
    string n;
    while(getline(cin, n)){
        string_analyze(n);
    }
    return 0;
}

void string_analyze(string s){
    int lower = 0;
    int upper = 0;
    int number = 0;
    int space = 0;
    for(char c : s){
        if((int)c >=97&& (int)c<= 122){
            lower++;
        }else if((int)c>=65 && (int)c<=90){
            upper++;
        }else if((int)c>=48 && (int)c<=57){
            number++;
        }else{
            space++;
        }
    }
    printf("%d %d %d %d\n", lower, upper, number, space);

}