#include <iostream>
using namespace std;

void push(int x);
void pop();
void size();
void empty();
void top();

int n, x, sze=0;
string ope;
int arr[10001];

int main(){
    cin>>n;
    for(int i = 0 ; i < n; i ++){
        cin>>ope;
        if(ope=="push"){
            cin>>x;
            push(x);
        }else if(ope == "pop"){
            pop();
        }else if(ope == "empty"){
            empty();
        }else if(ope == "size"){
            size();
        }else{
            top();
        }
    }
    return 0;
}

void push(int x){
    arr[sze]=x;
    sze++;
}

void pop(){
   if(sze!=0){
       cout<<arr[sze-1]<<endl;
       arr[sze-1]=0;
       sze--;
   }else{
        cout<<-1<<endl;
   }
}

void size(){
    cout<<sze<<endl;
}

void empty(){
    if(sze==0){
        cout<<1<<endl;
    }else{
        cout<<0<<endl;
    }
}

void top(){
    if(sze==0){
        cout<<-1<<endl;
    }else{
        cout<<arr[sze-1]<<endl;
    }
}