#include <iostream>
#include <cmath>
using namespace std;
int card[101];
int n, m, answer;

int main(){
  cin >> n>>m;
  for(int i = 0 ; i < n; i++){
    cin>> card[i];
  }
  for(int i = 0 ; i<n-2; i++){
    for(int j = i+1 ; j<n; j++){
      for(int k = j+1 ; k<n; k++){
        int sum = card[i]+card[j]+card[k];
          if(sum <= m&& answer<sum){
          answer = sum;
          }
      }
    }
  }
  cout<< answer;
  return 0;
}
