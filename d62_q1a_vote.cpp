#include<bits/stdc++.h>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false);cin.tie(0);
    int n,k;
    string s;
    map<string,int> m;
    priority_queue<int> pq;
    cin>>n>>k;
    while(n--){
        cin>>s;
        m[s]++;
    }
    for(auto x:m){
        pq.push(x.second);
    }
    while(k--){
        n=pq.top();
        pq.pop();
        if(pq.empty()){
            break;
        }
    }
    cout<<n;
    return 0;
}