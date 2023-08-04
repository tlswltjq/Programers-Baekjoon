#include "iostream"
using namespace std;
long long ct[100001];
long long cost[100001];
long long  sp = 1000000000;
int n;
long long total;
int main(){
    cin >> n;
    for(int i = 0 ; i < n-1; i++){
        cin>> ct[i];
    }
    for(int i = 0 ; i < n; i++){
        cin>> cost[i];
    }
    for(int i = 0 ; i < n; i++){
        if (sp>cost[i]){
            sp  =cost[i];
        }
        total += sp*ct[i];
    }
    cout<<total;
    return 0;
}