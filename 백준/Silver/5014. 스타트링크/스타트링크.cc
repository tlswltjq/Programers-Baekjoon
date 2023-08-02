#include "iostream"
#include "queue"
int chk[1000001];
using namespace std;

int main(){
    int f,s,g,u,d;
    queue<int> queue;
    cin>> f>> s>> g>> u>> d;
    queue.push(s);
    chk[s]= 1;
    int now;
    while(!queue.empty()){
       now = queue.front();
       queue.pop();
       if (now ==g){
            cout<<chk[g]-1;
            exit(0);
       }
       if(now+u<=f && chk[now+u]==0){
            queue.push(now+u);
            chk[now+u]= chk[now] +1;
       }
       if(now-d>=1 && chk[now-d]==0){
            queue.push(now-d);
            chk[now-d] = chk[now] +1;
       }
    }
    cout<<"use the stairs";
    return 0;
}