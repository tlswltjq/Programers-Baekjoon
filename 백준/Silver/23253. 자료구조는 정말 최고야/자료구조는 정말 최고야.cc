#include <iostream>
using namespace std;

int main(){
  int n, m, j, prev, now;
  cin>> n>> m;
  for(int i = 0;i < m; i++){
    prev =2000001;
    cin>> j;
    for(int k = 0 ; k<j; k++){
      cin>> now;
    
      if (prev<now){
        cout<<"No"<<endl;
        return 0;
      }
      prev = now;
    }
  }
  cout<<"Yes"<<endl;
  return 0;
}
