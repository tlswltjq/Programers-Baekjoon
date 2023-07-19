#include <iostream>
#include <stack>
using namespace std;

string stick;
int main(){
    int slice = 0;
    stack<char> stack;
    cin>> stick;
    for(int i = 0 ; i<stick.length(); i++){
        if(stick[i]=='('){
            stack.push('(');
        }else{
            stack.pop();
            if(stick[i-1]!='('){
                slice++;
            }else{
                slice += stack.size();
            }
        }
    }
    cout<<slice;
    return 0;
}