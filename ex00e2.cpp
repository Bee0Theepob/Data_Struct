#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,m,t,l,b,r,q,tmp,maxxi;
    cin>>n>>m;
    cin>>q;
    int v[n][m] ;
    for(int i= 0;i<n;i++){
        for(int j=0; j<m;j++){
            cin>>v[i][j];
        }
    }

    for(int i = 0; i<q;i++){
        maxxi=INT_MIN;
        cin>>t>>l>>b>>r;
        if((t>b) or (l>r)){
            cout<<"INVALID"<<"\n";
        }
        else if((t>n) or (l>m)){
            cout<<"OUTSIDE"<<"\n";
        }
        else{
            b=min(b,n);
            r=min(r,m);
            for(int j=t;j<=b;j++){
                for(int k=l;k<=r;k++){
                    if(v[j-1][k-1]>maxxi){
                        maxxi=v[j-1][k-1];
                    }
                }
            }
            cout<<maxxi<<"\n";
        }
    }

    return 0;
}