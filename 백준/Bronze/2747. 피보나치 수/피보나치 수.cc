#include <iostream>
using namespace std;
int fibo[46] = {0, 1, };
int main(){
	int n;
	cin>>n;
	if(n==0){
		cout<<0<<endl;
		return 0;
	}
	if(n==1){
		cout<<1<<endl;
		return 0;
	}
	for(int i = 2; i <sizeof(fibo);i++){
		fibo[i] = fibo[i-2]+fibo[i-1];
		if (i==n){
			cout<<fibo[i];
			break;
		}
	}

	return 0;
}