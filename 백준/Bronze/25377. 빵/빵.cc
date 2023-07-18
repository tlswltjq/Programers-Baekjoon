#include <iostream>
using namespace std;

int main(){
    int n, a, b, min=1001;
    cin>> n;
    for(int i = 0 ; i < n ; i++){
        cin >>a >>b;
        if(a<=b){
            if(min>b){
                min = b;
            }
        }
    }
    if (min<1001){
        cout<<min;
    }else{
        cout<<"-1";
    }
    return 0;
}