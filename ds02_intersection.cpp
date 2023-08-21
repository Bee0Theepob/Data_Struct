#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 
int main() { 
    int n,m,tmp;
    vector<int> a,b,c;
    cin>>n>>m;
    while(n--){
        cin>>tmp;
        a.push_back(tmp);
    }
    while(m--){
        cin>>tmp;
        b.push_back(tmp);
    }
    for(auto it=a.begin();it!=a.end();it++){
        if(find(b.begin(),b.end(),*it)!=b.end()){
            if(find(c.begin(),c.end(),*it)==c.end()){
            c.push_back(*it);}
        }
    }
    sort(c.begin(),c.end());
    for(int i:c){
        cout<<i<<" ";
    }
    
    
    return 0; 
    }