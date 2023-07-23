#include<iostream>
using namespace std;

int t,k,n;
int apt[15][15];
int main(){
    for(int i = 0 ; i < 15; i++){
        for(int j = 1 ; j < 15; j++){
            if(i==0){
                apt[i][j] = j;
            }else{
                apt[i][j] = apt[i][j-1] + apt[i-1][j];
            }
        }
    }
    cin>>t;
    for(int i = 0 ; i<t; i++){
        cin>>k>>n;
        cout<<apt[k][n]<<endl;
    }
    return 0;
}