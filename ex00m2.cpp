#include <bits/stdc++.h>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m1,a,u,i,v;
    char tmp;
    cin>>n>>m1>>a;
    vector<int> vec(n);//จำนวนแต่ละชิ้น
    map<int,set<pair<int,int>>> m;//สินค้า:{(ราคา:คน)...}
    vector<set<int>> p(m1); //คน(idx):{สินค้า...}
    map<pair<int,int>,int> log;
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    while(a--){
        cin>>tmp;
        if(tmp=='B'){
            cin>>u>>i>>v;
            auto it=log.find({u,i});
            if(it!=log.end()){
                m[i].erase({it->second,-u});
                log.erase(it);
            }
            m[i].insert(m[i].end(),{-v,-u});
            log.insert(log.end(),{{u,i},-v});
        }
        else{
            cin>>u>>i;
            auto it=log.find({u,i});
            if(it!=log.end()){
                m[i].erase({it->second,-u});
                log.erase(it);
            }

        }
    }
    // for(auto it=m.begin();it!=m.end();it++){
    //     int key=it->first;
    //     cout<<key<<':';
    //     for(auto it2=m[key].begin();it2!=m[key].end();it2++){
    //         cout<<'('<<it2->first<<','<<it2->second<<')';
    //     }
    //     cout<<'\n';
    // }

    //rearrange to answer
    for(auto it=m.begin();it!=m.end();it++){
        set<pair<int,int>> tmp=it->second;
        int item=(it->first);
        for(auto it2=tmp.begin();it2!=tmp.end();it2++){
            if(vec[item-1]>0){
                p[-(it2->second)-1].insert(item);
                vec[item-1]-=1;
            }
            else{
                break;
            }
        }
    }
    
    
    
    //print part
    for(int i =0;i<p.size();i++){
        if(!p[i].empty()){
            for(auto it=p[i].begin();it!=p[i].end();it++){
                cout<<*it<<' ';
            }
            cout<<'\n';
        }
        else{
            cout<<"NONE\n";
        }
    }


    return 0;
 }