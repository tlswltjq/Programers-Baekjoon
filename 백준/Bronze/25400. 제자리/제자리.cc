#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin>> n;
	vector<int>list(n);
	for(int i = 0 ; i < n; i++){
		cin >> list[i];
	}
	sort(list.begin(), list.end());
	for(int i = 0 ; i<n ; i++){
		if(list[i]!=i+1){
			cout<<n-i;
			return 0;
		}
	}
	cout<<0;
	return 0;
}