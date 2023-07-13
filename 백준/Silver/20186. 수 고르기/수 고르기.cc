#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cp(int a, int b){
	return a>b;
}
int main(){
	int n, k, answer = 0;
	cin >>n>>k;
	vector<int> list(n);
	for(int i = 0 ; i < n ; i++){
		cin>>list[i];
	}
	sort(list.begin(), list.end(), cp);

	//for(int i = 0 ; i < n; i++){cout<< list[i];}
	for(int i = 0 ; i < k; i++){
		answer+=list[i];
	}
	cout<<answer;
	return 0;
}