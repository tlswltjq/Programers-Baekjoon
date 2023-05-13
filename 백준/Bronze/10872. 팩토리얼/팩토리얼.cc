#include <iostream>
int factorial(int x);
using namespace std;

int main(){
	int x;
	int result =1;
	cin>>x;
	while(x>0){
		result*=x;
		x--;
	}
	cout<<result<<endl;
}