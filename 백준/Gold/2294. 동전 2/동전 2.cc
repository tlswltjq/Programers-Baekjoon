#include "iostream"
#include "vector"

using namespace std;
int n, k;
int main(){
    cin>> n>> k;
    vector<int> values (k+1, -1);
    vector<int> coin(n);
    values[0] = 0;

    for(int i = 0 ; i < n ; i++){
        cin>> coin[i];
    }

    for(int i = 1 ; i<= k; i++){
        // cout<< values[i];
        for(int c : coin){
            if (i - c >= 0 && values[i - c] >= 0) {
                if (values[i] == -1 || values[i] > values[i - c] + 1) {
                    values[i] = values[i - c] + 1;
                }
            }
        }
    }
    cout<<values[k];
    return 0;
}