#include <iostream>
using namespace std;
int n, m;
int answer[10];
bool chk[10];

void back_t(int k, int start){
  if (k==m){
    for(int i = 0 ; i < m ; i++){
      cout<<answer[i]<< " ";
    }
    cout<<"\n";
    return; 
  }
  for(int i = start ; i < n; i++){
    if(!chk[i]){
      answer[k] = i+1;
      chk[i] = true;
      back_t(k +1, i +1);
      chk[i] = false;
    }
  }
}

int main(){
  cin>> n>>m;
  back_t(0, 0);
  return 0;
}
