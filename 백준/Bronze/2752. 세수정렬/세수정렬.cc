#include "iostream"
using namespace std;
int nums[3];
int main(){
  for(int i = 0 ; i < 3; i++){
    cin>>nums[i];
  }

  for(int i = 0 ; i < 3;i++){
    for(int j = i+1; j<3; j++){
      if (nums[i]>nums[j]){
        int tmp = nums[i];
        nums[i] = nums[j];
        nums[j] = tmp;
      }
    }
  }
  cout<< nums[0]<<" "<< nums[1]<<" "<< nums[2];
  return 0;
}
