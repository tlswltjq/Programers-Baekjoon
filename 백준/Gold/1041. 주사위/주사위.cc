#include <algorithm>
#include <iostream>
using namespace std;
long long n;
long long layer_3, layer_2, layer_1;
int face[6];

int main(){
  cin>> n>> face[0]>> face[1]>> face[2]>> face[3]>> face[4]>> face[5];
  
  int conner[] = {
      face[0]+face[1]+face[2],
      face[0]+face[1]+face[3],
      face[0]+face[4]+face[3],
      face[0]+face[4]+face[2],
      face[5]+face[1]+face[2],
      face[5]+face[1]+face[3],
      face[5]+face[4]+face[3],
      face[5]+face[4]+face[2]
  };
  int edge[] = {
      face[0]+face[1],
      face[0]+face[2],
      face[0]+face[3],
      face[0]+face[4],
      face[1]+face[2],
      face[1]+face[3],
      face[4]+face[2],
      face[4]+face[3],
      face[5]+face[1],
      face[5]+face[2],
      face[5]+face[3],
      face[5]+face[4]
  };
  sort(face, face+6);
  if (n ==1){
    cout << face[0]+face[1]+face[2]+face[3]+face[4];
    return 0;
  }
  sort(conner, conner+8);
  sort(edge, edge+12);
  if (n ==2){
    cout<<conner[0]*4 + edge[0]*4;
    return 0;
  }
  layer_3 = conner[0]*4 + edge[0]*(n-2)*4 + face[0]*(n-2)*(n-2);
  layer_2 = edge[0]*4*(n-2) + face[0]*(n-2)*(n-2)*4;
  layer_1 = edge[0]*4 + face[0]*(n-2)*4;

  cout<< layer_1+layer_2+layer_3;
  return 0;
}
