#include "iostream"
using namespace std;
long long arr[101] = {1,1,1};

int main(){
    int t, n;
    cin>> t;
    for(int i =3 ; i < 101; i++){
        arr[i] = arr[i-3]+arr[i-2];
    }

    for(int i = 0 ; i <t; i++){
        cin>> n;
        cout<< arr[n-1]<<endl;
    }

};
