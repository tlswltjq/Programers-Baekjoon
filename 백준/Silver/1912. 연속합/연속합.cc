#include <iostream>
#define MAX(a, b)(a> b ? a : b)
using namespace std;
int arr[100000];
int sum[100000];
int n, answer;
int main(){
    cin>>n;
    for(int i = 0 ; i  <n; i++){
        cin>>arr[i];
    }
    answer = sum[0] = arr[0];

    for(int i =0 ; i< n; i++){
        sum[i] = MAX(arr[i], sum[i-1]+arr[i]);
        answer = MAX(answer, sum[i]);
    }
    cout<< answer<<endl;
    return 0;
}