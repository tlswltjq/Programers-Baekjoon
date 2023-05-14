#include <iostream>
using namespace std;
long long recursion(long long a, long long b, long long c);

int main(){
	long long a, b, c;

	cin>> a>> b>> c;
	cout<< recursion(a, b, c);

	return 0;
}

long long recursion(long long a, long long b, long long c){
	if (b==0){
		return 1;
	}
	long long tmp = recursion(a, b/2, c);
	tmp = (tmp * tmp)%c;

	if (b%2 == 1){
		tmp = (tmp * a)%c;
	}

	return tmp;
}