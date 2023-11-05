#include <bits/stdc++.h>
using namespace std;
set<int> s;
void getChild(int a,int n){
    s.insert(a);
    if(2*a+1<n){
        getChild(2*a+1,n);
    }
    if(2*a+2<n){
        getChild(2*a+2,n);
    }
}

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,a;
    cin>>n>>a;
    getChild(a,n);
    cout<<s.size()<<'\n';
    for(auto x:s){
        cout<<x<<' ';
    }
    return 0;
 }