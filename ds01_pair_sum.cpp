#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m,tmp;
    bool check;
    map<int,int> f;
    cin>>n>>m;
    while(n--){
        cin>>tmp;
        if(f[tmp]==0){
            f[tmp]=1;
        }
        else{
            f[tmp]++;
        }
    }
    while(m--){
        cin>>tmp;
        check=false;
        for(auto it= f.begin();it!=f.end();it++){
            auto itf=f.find(tmp-(it->first));
            if(itf!=f.end()){
                if(itf->first==it->first){
                    if(f[(it->first)]>=2){
                        check=true;
                        break;
                    }
                }
                else{
                    check=true;
                    break;
                }
            }
        }
        if(check){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    
    
    return 0;
}