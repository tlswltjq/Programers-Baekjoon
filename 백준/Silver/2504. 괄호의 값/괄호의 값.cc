#include <iostream>
#include <stack>
using namespace std;

stack<char> stk;

string brackets;
int value =0;
int tmp = 1;

int main(){
    cin>> brackets;

    for (int i = 0; i < brackets.length(); i++) {
        char c = brackets[i];
        if(c=='('){
            tmp*=2;
            stk.push(c);
        }else if (c=='['){
            tmp*=3;
            stk.push(c);
        }else if (c==')'){
            if(stk.empty() || brackets[i-1]=='['){
                cout<<0;
                return 0;
            }
            if(brackets[i-1] =='('){
                value+=tmp;
            }
            if(!stk.empty() && stk.top() == '('){
                stk.pop();
            }
            tmp/=2;
        }else if (c==']'){
            if(stk.empty() || brackets[i-1]=='('){
                cout<<0;
                return 0;
            }
            if(brackets[i-1] =='['){
                value+=tmp;
            }
            if(!stk.empty() && stk.top() == '['){
                stk.pop();
            }
            tmp/=3;
        }
    }

    if(!stk.empty()){
        cout<<0;
    }else{
       cout<<value;
    }
    return 0;
}
