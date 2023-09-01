#include <iostream> 
#include <map> 
#include<algorithm>
using namespace std; 
int main() { 
    int n,m,tmp,a,b,c=1;
    bool win=true;
    cin>>n>>m;
    map<int,int> mp;
    while(n--){
        cin>>tmp;
        mp[tmp]++;
    }
    while(m--){
        cin>>tmp;
        while(tmp--){
            cin>>a;
            auto it=mp.upper_bound(a);
            while(it!=mp.end()){
                if(it->second>0){
                    it->second-=1;
                    if(it->second==0){
                        mp.erase(it);
                    }
                    break;
                }
                else if(it->second==0){
                    it++;
                }
            }
            if(it==mp.end()){
                cout<<c;
                exit(0);
            }

        }
        c++;
    }
        cout<<c;
    return 0; 
    }