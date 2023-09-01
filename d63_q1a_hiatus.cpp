#include <iostream> 
#include<set>
#include<algorithm>
using namespace std; 
int main() { 
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,yr,mth;
    set<pair<int,int>> s;
    cin>>n>>m;
    while(n--){
        cin>>yr>>mth;
        s.insert({yr,mth});
    }
    for(int i=0;i<m;i++){
        cin>>yr>>mth;
        auto it=s.begin();
        if(yr<it->first || (yr==it->first && mth<it->second)){
            cout<<"-1 -1 ";
            continue;
        }
        it=s.lower_bound({yr,mth});
        if(it->first==yr && it->second==mth){
            cout<<"0 0 ";
        }
        else{
            it--;
            cout<<it->first<<" "<<it->second<<" ";
        }
    }
    return 0; 
}