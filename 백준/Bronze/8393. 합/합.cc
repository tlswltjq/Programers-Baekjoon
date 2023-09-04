
#include <iostream>

using std::cin;
using std::endl;
using std::cout;

int main(){
    int n;
    int result=0;
    cin>>n;
    while(n!=0){
        result+=n;
        n--;
    }
    cout<<result;
    return 0;
}
