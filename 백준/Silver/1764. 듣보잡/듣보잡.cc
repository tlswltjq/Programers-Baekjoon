#include <iostream>
#include <set>
using namespace std;

set<string> name;
set<string> result;
int n, m;
string tmp_name;
int main(){
    cin>>n>>m;
    for(int i =0; i < n; i++){
        cin>>tmp_name;
        name.insert(tmp_name);
    }
    for(int i = 0 ; i < m; i++){
        cin>>tmp_name;
        if(name.find(tmp_name)!=name.end()){
            result.insert(tmp_name);
        }
    }

    cout<<result.size()<<endl;
    for(string s : result){
        cout<<s<<endl;
    }
    return 0;
}