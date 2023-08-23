#include <iostream>
#include <algorithm>
using namespace std;
int n, m;
int answer[10];
int nums[10];
bool chk[10000];

void back_t(int k){
  if (k==m){
    for(int i = 0 ; i < m ; i++){
      cout<<answer[i]<< " ";
    }
    cout<<endl;
    return; 
  }
  int chk_2= -1;
  for(int i = 0 ; i < n; i++){
    if(!chk[i]&& nums[i]!=chk_2){
        //이제껏 chk[nums[i]]로 검사했으나 9 7 9 1같은경우 입력받은 수를 직접적으로 인덱스로 사용할 경우 문제 발생
        //i번째 요소를 사용했는지 체크 하도록 함
      answer[k] = nums[i];
      chk_2= nums[i];
      chk[i] = true;
      back_t(k +1);
      chk[i] = false;
    }
  }
}

int main(){
  cin>> n>>m;
  for(int i = 0 ; i < n ; i++){
    cin>> nums[i];
  }
  sort(nums, nums+n);
  back_t(0);
  return 0;
}
 
