#include <iostream>
#include <algorithm>
using namespace std;
int n, m;
int answer[10];
bool chk[10000];
int nums[10];

void back_t(int k, int start){
  if (k==m){
    for(int i = 0; i< m; i++){
      cout<<answer[i]<<" ";
    }
    cout<<"\n";
    return;
  }
  for(int i = start ; i<n; i++){
    answer[k] = nums[i];
    i--;
    back_t(k+1, i+1);
    i++;
  }

}

int main(){
  cin>> n>>m;
  for(int i = 0 ; i < n; i++){
    cin>> nums[i];
  }
  sort(nums, nums+n);
  back_t(0, 0);
  return 0;
}
