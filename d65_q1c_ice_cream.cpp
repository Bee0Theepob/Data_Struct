#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,start,a,s,money;
    vector<int> v;
    set<pair<int,int>> st;
    cin>>n>>m>>start;
    money=start;
    v.push_back(start);
    while(n--){
        cin>>a>>s;
        st.insert({a,s});
    }
    for(auto it=st.begin();it!=st.end();it++){
        a=it->first;
        s=it->second;
        while(v.size()<a){
            money+=start;
            v.push_back(money);
        }
        start=s;
    }
    int p=100000;
    while(p--){
        money+=start;
        v.push_back(money);
    }
    while(m--){
        cin>>a>>s;
        auto it=lower_bound(v.begin(),v.end(),a);
        if(it-v.begin()>s){
            it=lower_bound(v.begin(),v.end(),a+v[s]);
        }
        cout<<it-v.begin()<<' ';
    }
    return 0;
}
