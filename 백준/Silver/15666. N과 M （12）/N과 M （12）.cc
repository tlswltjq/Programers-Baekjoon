#include <iostream>
#include <algorithm>

using namespace std;
int nums[10];
int answer[10];
bool chk[10];

int n, m;
void back_t(int k){
  if(k==m){
    for(int i = 0 ; i < m; i++){
      cout<< answer[i]<< " ";
    }
    cout<<"\n";
    return;
  }
  int chk_2= -1;
  for(int i = 0 ; i < n ; i ++){
    if(chk_2!= nums[i]&&answer[k-1]<=nums[i]){
      answer[k] = nums[i];
      chk_2 = nums[i];
      back_t(k+1);
    }
  }

}
int main(){
  cin>> n>>m;
  for(int i = 0 ; i < n; i++){
    cin>> nums[i];
  }
  sort(nums, nums+n);
  back_t(0);
  return 0;
}

