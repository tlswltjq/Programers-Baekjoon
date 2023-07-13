#include <iostream>
using namespace std;
int n, answer= 0;

int main(){
	cin>>n;
	for(int i = 1; i <=n; i++){
		int tmp = i;
		while(tmp!=0){
			if ((tmp%10 ==3)||(tmp%10==6)||(tmp%10==9)){
				answer++;
			}
			tmp/=10;
		}
	}
	cout<<answer;
	return 0;
}