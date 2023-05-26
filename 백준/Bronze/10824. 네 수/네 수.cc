#include <iostream>
using namespace std;

long long merge_number(long long a, long long b);

int main(){
    int a, b, c, d;
    cin >> a>>b>>c>>d;


    cout<< merge_number(a, b)+ merge_number(c, d);

    return 0;
}

long long merge_number(long long a, long long b){
    int tmp_b = b;
    int count=0;

    while(tmp_b!=0){
        tmp_b/=10;
        count++;
    }
    for(int i =0; i <count; i++){
        a*=10;
    }
    return a+b;
}