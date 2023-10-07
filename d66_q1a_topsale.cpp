#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);std::cin.tie(0);
    int n,m,tmp,a,b;
    map<int,int> mp;
    set<pair<int,int>> s;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>tmp;
        mp[tmp]=0;
        s.insert({0,-tmp});
    }
    for(int i=0;i<m;i++){
        cin>>tmp;
        if(tmp==1){
            cin>>a>>b;
            if(mp.find(a)!=mp.end()){
                s.erase({mp[a],-a});
                mp[a]-=b;
                s.insert({mp[a],-a});
            }
        }   
        else{
            cin>>a;
            auto it =s.lower_bound({-a,INT_MAX});
            if(it==s.end()){
                cout<<"NONE\n";
            }    
            else{
                if(it->first==0){
                    cout<<"NONE\n";
                }
                else{
                cout<<-it->second<<'\n';}
            }
        }
        // for(auto it=mp.begin();it!=mp.end();it++){
        //     cout<<'('<<it->first<<','<<it->second<<')';
        // }
        // cout<<'\n';
        // cout<<"set:";
        // for(auto it=s.begin();it!=s.end();it++){
        //     cout<<'('<<it->first<<','<<it->second<<')';
        // }
        // cout<<'\n';
    }
    return 0;
}