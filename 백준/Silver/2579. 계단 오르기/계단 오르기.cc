#include "iostream"
using namespace std;

int score[300];
int step[300];

int t;
int MAX(int a, int b){
    return a>b? a:b;
}
int main(){
    cin>>t;
    for(int i = 0 ; i < t; i++ ){
        cin>>score[i];
    }
    step[0] = score[0];
    step[1] = MAX(score[1], score[0]+score[1]);
    step[2] = MAX(score[2]+score[1], score[0] + score[2]);
    for(int i = 3; i <=t ; i++){
        step[i] = MAX(step[i-2]+score[i], step[i-3]+ score[i-1]+score[i]);
    }
    cout<<step[t-1];
    return 0;
}
