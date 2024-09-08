#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m,a;
    vector<int> v;
    cin>>n>>m;
    while(n--){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    while(m--){
        cin>>a;
        if(a>v[v.size()-1]){
          cout<<v[v.size()-1]<<' ';
          continue;
        }
        auto it = upper_bound(v.begin(),v.end(),a);
        if(it==v.begin()){
             cout<<*it<<' ';
             continue;
        }
        auto it2 = it-1;
        if(abs(*it-a)<=abs(*it2-a)){
            cout<<*it<<' ';
        }
        else{
            cout<<*(it2)<<' ';
        }
    }

    return 0;
}