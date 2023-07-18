#include <iostream>
using namespace std;
int main(){
    int n, a, b, tmp;
    cin >>n;
    for(int i =0; i <n; i++){
        int arrA[4]={0,0,0,0};
        int arrB[4]={0,0,0,0};

        cin>>a;
        for(int j = 0 ; j<a; j++){
            cin>>tmp;
            arrA[tmp-1]++;
        }
        cin>>b;
        for(int j = 0 ; j<b; j++){
            cin>>tmp;
            arrB[tmp-1]++;
        }

        for(int i = 3 ; i >=0; i--){
            if(arrA[i]>arrB[i]){
                cout<<"A"<<endl;
                break;
            }else if(arrB[i]>arrA[i]){
                cout<<"B"<<endl;
                break;
            }else if(i==0&&arrA[i]==arrB[i]){
                cout<<"D"<<endl;
                break;
            }else{
                continue;
            }
        }
    }
    return 0;
}