#include <iostream>
using namespace std;
int n, m;
int answer[10];
bool chk[10];

void back_t(int k){
  if (k==m){
    for(int i = 0 ; i < m ; i++){
      cout<<answer[i]<< " ";
    }
    cout<<"\n";
    return; 
  }
  for(int i = 0 ; i < n; i++){
    if(k==0|| answer[k-1]<=i+1){
      answer[k] = i+1;
      back_t(k +1);
    }
  }
}

int main(){
  cin>> n>>m;
  back_t(0);
  return 0;
}
 