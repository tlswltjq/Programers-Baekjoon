#import <iostream>
using namespace std;
int sugar[5001];

int main(){
    int N;

    for(int i = 1 ; i < 5001; i++){
        sugar[i] = -1;
    }

    cin>> N;

    for(int i = 3;i<=N; i++){
        if(sugar[i-3]!=-1){
            sugar[i] = sugar[i-3]+1;
        }
    }
    for(int i = 5; i<=N; i++){
        if(sugar[i-5]!=-1){
            sugar[i] = sugar[i-5]+1;
        }
    }

    cout<< sugar[N];
}