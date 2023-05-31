 #include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    int x, y ,r;
    int xx, yy, rr;

    cin>> n;

    for(int i = 0 ; i <n; i++){
        cin>> x>>y>>r>>xx>>yy>>rr;
        double calc = r+ rr;
        double dist = sqrt(pow(xx-x, 2) + pow(yy-y, 2));
        if (dist ==0){
            if (r ==rr){
                cout<<-1<<endl;
            }else{
                cout<<0<<endl;
            }
        }else{
            if (dist ==calc||dist == abs(rr-r)){
                cout<<1<<endl;
            }else if(dist <calc&&dist > abs(r - rr)){
                cout<<2<<endl;
            }else{
                cout<<0<<endl;
            }
        }

    }
    return 0;
}