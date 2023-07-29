#include "iostream"
#include "algorithm"
int immigration[100000];

using namespace std;

long long int n, m, sum, answer, l, r, mid;
int mmin = 1000000000;

int main(){
    cin>>n >> m;
    
    for(int i = 0 ; i < n; i++){
        cin>>immigration[i];
        mmin = mmin >immigration[i] ? immigration[i] : mmin;
    }
    l = 0; r = mmin*m;
    while (!(l>r)) {
        mid = (l + r)/2;
        sum =0;
        for(int i = 0 ; i < n; i++){
            sum += mid/immigration[i];
            if (sum>=m){
                break;
            }
        }
        if (sum<m){
            l = mid+1;
        }else{
            r = mid -1;
            answer = mid;
        }
            
    }
    cout<< answer<<endl;
    
}
