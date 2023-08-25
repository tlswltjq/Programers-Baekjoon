#include <iostream>
#include <algorithm>
using namespace std;
int nums[10];
int answer[10];
int n, m;
void back_t(int k){
  if (k==m){
    for(int i = 0 ; i < m; i++){
      cout<< answer[i]<< " ";
    }
    cout<<"\n";
    return;
  }
  int chk = -1;
  for(int i = 0 ; i <n; i++){
    if(nums[i]!=chk){
      answer[k] = nums[i];
      chk = nums[i];
      back_t(k+1);
    }
  }
}

int main(){
  cin>> n >>m;
  for(int i = 0 ; i < n ; i++){
    cin>>nums[i];
  }
  sort(nums, nums+n);
  back_t(0);
  return 0;
}
