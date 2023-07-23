#include <iostream>
using namespace std;

int arr[11] = {1, };
int n, t;

int main(){
    for(int i =1; i<11; i++){
        for(int j = 1 ; j<=3; j++){
            if(i-j>=0){
                arr[i] +=arr[i-j];
            }
        }
    }

    cin>> t;
    for(int i = 0 ; i < t; i++){
        cin>>n;
        cout<<arr[n]<<endl;
    }
    return 0;
}