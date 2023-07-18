#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i < n; i++){
        arr[i] = i+1;
    }
    while(arr.size()!=1){
        for(int i = arr.size()-1 ; i >=0; i--){
            if ((i+1)%2 == 1){
                arr.erase(arr.begin()+i);
            }
        }
    }
    cout<<arr[0];
    return 0;
}