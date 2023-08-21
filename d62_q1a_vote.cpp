#include <iostream> 
#include <map> 
#include <queue>
using namespace std; 
int main() {            
    int n,k,minn;
    string name;
    map<string,int> p;
    cin>>n>>k;
    while(n--){
        cin>>name;
        p[name]++;
    }
    if(p.size()<k){
        minn=(p.begin())->second;
        auto it=p.begin();
        it++;
        for(it;it!=p.end();it++){
            if(it->second<minn){
                minn=it->second;
            }
        }
    }
    else{
        priority_queue<int> pq;
        for(auto it=p.begin();it!=p.end();it++){
            pq.push(it->second);
        }
        while(k--){
            minn=pq.top();
            pq.pop();
        }

    }
    cout<<minn;
    
    return 0;
    }