#include <iostream>
using namespace std;
int arr[11]={1,};
int main(){
	int n, k;
	cin >>n >> k;
	for(int i = 1 ; i < (sizeof(arr)/sizeof(int))-1;i++){
		arr[i]=arr[i-1]*(i+1);
	}
	if (k == 0 || k == n) {
        	cout << 1 << endl;
    	} else {
		cout<<arr[n-1]/(arr[n-k-1]*arr[k-1])<<endl;
	}
	return 0;
}