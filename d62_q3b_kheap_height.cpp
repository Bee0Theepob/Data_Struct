#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    long long n,k,c=1,ans=0,a=1;
    cin>>n>>k;
    if(k==1){
        cout<<n-1;
        return 0;
    }
    while(a<n){
        c*=k;
        a+=c;
        ans++;
    }
    cout<<ans;
    return 0;
}