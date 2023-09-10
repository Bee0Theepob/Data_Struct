#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int> v;
    multiset<int> rank;
    for(int i=0;i<m;i++){
        v.push_back(1);
        rank.insert(1);
    }
    vector<int> pow(n),grp(n);
    for(int i=0;i<n;i++){
        cin>>pow[i];
    }
    for(int i=0;i<n;i++){
        cin>>grp[i];
    }
    for(int i=0;i<n;i++){
        if(v[grp[i]]<pow[i]){
            rank.erase(rank.find(v[grp[i]]));
            v[grp[i]]=(pow[i]);
            rank.insert(pow[i]);
        }
        cout<<*(rank.begin())<<" ";
    }
    
    return 0;
}