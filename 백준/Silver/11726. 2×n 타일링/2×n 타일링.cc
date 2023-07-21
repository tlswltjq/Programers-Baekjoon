#include <iostream>
using namespace std;
int fl[1001] = {0,1,2};
int n;
int main(){
    for(int i = 3 ; i < 1001; i++){
        fl[i] = (fl[i-1]+fl[i-2])%10007;
    }
    cin>> n;
    cout<<fl[n];
    return 0;
}