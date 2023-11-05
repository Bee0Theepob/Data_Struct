#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,m,a,b;
    cin>>n>>m;
    map<int,int> mp;
    mp[0]=-1;
    int i=0;
    while(mp.size()<n){
        mp[2*i+1]=i;
        mp[2*i+2]=i;
        i++;
    }
    while(m--){
        cin>>a>>b;
        if(a==b){
            cout<<"a and b are the same node\n";
            continue;
        }
        else{
            bool trig=true,trig2=true;
            if(a>b){
                int tmp=a;
                a=b;
                b=tmp;
                trig=false;
            }
            while(b!=-1){
                if(b==a){
                    trig2=false;
                    if(trig){
                        cout<<"a is an ancestor of b\n";
                    }
                    else{
                        cout<<"b is an ancestor of a\n";
                    }
                    break;
                }
                b=mp[b];
            }
            if(trig2){cout<<"a and b are not related\n";
}
            
        }

    }
    return 0;
}