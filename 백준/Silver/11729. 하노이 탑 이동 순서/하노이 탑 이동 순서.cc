#include <iostream>
#include <vector>
using namespace std;
int hanoi(int n, int from, int to, int via, vector<string>& v);

int main(){
	vector<string> v;
	int n;
	cin>> n;

	hanoi(n, 1, 3, 2, v);
	cout<<v.size()<<"\n";

	for(int i = 0 ; i < v.size(); i++){
		cout<<v[i];
	}

	return 0;
}

int hanoi(int n, int from, int to, int via, vector<string>& v){
	if(n ==1){
		v.push_back(to_string(from)+ " " + to_string(to) + "\n");
		return 0;
	}
	hanoi(n-1, from, via, to, v);
	v.push_back(to_string(from)+ " " + to_string(to) + "\n");
	hanoi(n-1, via, to, from, v);
	return 0;
}