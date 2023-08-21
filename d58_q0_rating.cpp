#include <iostream> 
#include <map> 
#include <iomanip>
using namespace std; 
int main() {  
    cout << std::fixed << std::setprecision(2);
    int n,p;
    string sid,tid;
    map<string,pair<int,int>> s;
    map<string,pair<int,int>> t;
    cin>>n;
    while(n--){
        cin>>sid>>tid>>p;
        if(s.find(sid)==s.end()){
            s[sid]={p,1};
        }
        else{
            s[sid].first+=p;
            s[sid].second++;
        }
        if(t.find(tid)==t.end()){
            t[tid]={p,1};
        }
        else{
            t[tid].first+=p;
            t[tid].second++;
        }
    }
    for(auto it=s.begin();it!=s.end();it++){
        float point = (float) ((it->second).first)/((it->second).second);
        cout<<it->first<<" "<<point<<"\n";
    }
    for(auto it=t.begin();it!=t.end();it++){
        float point =(float) ((it->second).first)/((it->second).second);
        cout<<it->first<<" "<<point<<"\n";
    }
    }