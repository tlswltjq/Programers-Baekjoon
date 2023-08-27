#include <iostream>

using std::cin;
using std::endl;
using std::cout;

int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    int T;
    cin>>T;
    
    for(int i= 1;i<=T;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}

