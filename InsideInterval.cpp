#include <bits/stdc++.h>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,a,b;
    cin>>n>>m;
    map<int,int> mp;
    while(n--){
        cin>>a>>b;
        mp[a]=b;
    }
    while(m--){
        cin>>a;
        auto it = mp.lower_bound(a);
        if(it==mp.end()){
            it--;
        }
        if(it->first>a){
            it--;
        }
        if(a>=it->first && a<=it->second){
            cout<<1<<" ";
        }
        else{
            cout<<0<<" ";
        }
    }
    return 0;
}
