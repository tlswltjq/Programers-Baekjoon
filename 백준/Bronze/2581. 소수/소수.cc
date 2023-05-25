#include <iostream>
using namespace std;
int m, n;
int sum = 0;
int min_prime_num = 10000;

bool is_prime(int n);

int main(){
    cin >> m >> n;
    for(int i = m; i <=n;i++){
        if(is_prime(i)){
            if(min_prime_num>i){
                min_prime_num = i;
            }
            sum+=i;
        }
    }
    if(sum!= 0){
        cout<< sum<<endl<<min_prime_num;
    }else{
        cout<<-1;
    }

    return 0;
}

bool is_prime(int n){
    if(n ==2){
        return true;
    }else if(n ==1){
        return false;
    }
    for(int i = 2; i <= n/2; i++){
        if(n%i ==0){
            return false;
        }
    }
    return true;
}