#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);std::cin.tie(0);
    int n,m,tmp;
    bool trig=true;

    set<string> s;
    string a,b;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        s.insert(a+" "+b);
    }
    for(int i=0;i<m;i++){
        cin>>tmp;
        vector<string> v;
        trig=true;
        for(int j=0;j<tmp;j++){
            cin>>a>>b;
            auto it=s.find(a+" "+b);
            if(it==s.end()){
                trig=false;
            }
            else{
                v.push_back(a+" "+b);
            }
        }
        if(trig){
            cout<<"YES\n";
            for(int i=0;i<v.size();i++){
                s.erase(v[i]);
            }
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}