#include <iostream>
using namespace std;
int fibo(int n);


int main(){
	int n;
	cin>>n;
	cout<< fibo(n)<<endl;
	return 0;
}

int fibo(int n){
	if(n == 1){
		return 1;
	}
	if (n == 0) {
		return 0;
	}

	return fibo(n-1)+fibo(n-2);
}