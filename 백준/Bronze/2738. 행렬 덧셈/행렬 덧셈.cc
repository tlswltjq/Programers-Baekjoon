#include <iostream>
using namespace std;

int main(){
	int n, m;
	cin>>n >> m;

	int arrA[n][m];
	int tmp;

	for(int i = 0 ; i < n; i++){
		for(int j = 0 ; j < m; j++){
			cin >> arrA[i][j];
		}
	}


	for(int i = 0 ; i < n; i++){
		for(int j = 0 ; j < m; j++){
			cin >> tmp;
			arrA[i][j]+=tmp;
		}
	}

	for(int i = 0 ; i < n; i++){
		for(int j = 0 ; j < m; j++){
			if (j == m-1){
				cout<< arrA[i][j];
			}else{
				cout<< arrA[i][j]<<" ";
			}
		}
		cout<<endl;
	}

	return 0;
}