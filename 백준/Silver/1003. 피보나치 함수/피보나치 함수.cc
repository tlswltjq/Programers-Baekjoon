#include <iostream>
#include <vector>
using namespace std;

vector<pair<long long, long long> > fibo;

int main(){
    int T, cases;
    fibo.push_back(make_pair(1, 0));
    fibo.push_back(make_pair(0, 1));

    cin>> cases;
    for(int j = 0 ; j<cases; j++){
        cin>>T;
        if(T<2){
            cout<< fibo[T].first << " " <<fibo[T].second<<endl;
        }else{
            while (T >= fibo.size()) {
                int n = fibo.size();
                fibo.push_back(make_pair(fibo[n - 1].first + fibo[n - 2].first, fibo[n - 1].second + fibo[n - 2].second));
            }
            cout<< fibo[T].first << " " <<fibo[T].second<<endl;
        }
    }
    return 0;
}