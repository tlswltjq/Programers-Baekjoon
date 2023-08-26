#include <iostream>
#include <algorithm>

using namespace std;
int dwarfs[9];
int sum = 0;
int main(){
  for(int i = 0 ; i < 9; i++){
    cin>> dwarfs[i];
    sum += dwarfs[i];
  }
  sort(dwarfs, dwarfs+9);
  for(int i = 0 ; i < 9; i++){
    for(int j = i+1; j<9; j++){
      if (sum - (dwarfs[i]+dwarfs[j]) == 100){
       for(int dw : dwarfs){
         if (dw== dwarfs[i]||dw== dwarfs[j]){
           continue;
         }
         cout<< dw<< "\n";
       } 
       return 0;
      }
    }
  }
  return 0;
}
