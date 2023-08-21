#include <iostream> 
#include <set> 
using namespace std; 
int main() { 
    int n,m,tmp;
    set<int> a,b;
    cin>>n>>m;
    while(n--){
        cin>>tmp;
        a.insert(tmp);
    }
    while(m--){
        cin>>tmp;
        b.insert(tmp);
    }
    for(auto it=a.begin();it!=a.end();it++){
        if(b.find(*it)!=b.end()){
            cout<<*it<<" ";
        }
    }
    
    
    return 0; 
    }