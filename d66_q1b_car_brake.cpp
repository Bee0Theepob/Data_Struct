#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);cin.tie(0);
    int n,m,k,t,d;
    map<int,int> ttv,vtt;
    set<pair<int,int>> data; 
    cin>>n>>m>>k;
    ttv[0]=k;
    vtt[-k]=0;
    while(n--){
        cin>>t>>d;
        data.insert({t,d});
    }
    for(auto x:data){
        k-=x.second;
        if(k<=0){
            ttv[x.first]=0;
            vtt[0]=x.first;
            break;
        }
        ttv[x.first]=k;
        vtt[-k]=x.first;
    }
    while(m--){
        cin>>t>>d;
        if(t==1){
            auto it=ttv.lower_bound(d);
            if((it->first)>d){
                it--;
            }     
            cout<<it->second<<'\n';
        }
        else{
            auto it=vtt.upper_bound(-d);
            if(it==vtt.begin() && (it->first)>=-d){
                cout<<0<<'\n';
            }
            else if(it!=vtt.end()){
                cout<<it->second<<'\n';
            }
        }
    }
    return 0;
}
