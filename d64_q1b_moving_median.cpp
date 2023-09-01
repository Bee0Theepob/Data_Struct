#include<iostream>
#include <algorithm>
#include<vector>
#include <set>
using namespace std;
int printKth(multiset<int> &s,int k){
    auto it=s.begin();
    for(int i=1 ;i!=k;i++){
        it++;
    }
    return *it;
}
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,w,tmp,i=0;
    multiset<int> s;
    auto it=s.begin();
    vector<int> v;
    cin>>n>>w;
    while(n--){
        cin>>tmp;
        s.insert(tmp);
        v.push_back(tmp);
        if(s.size()==w+1){
            auto it=s.find(v[i]);
            cout<<printKth(s,1+(w)/2)<<" ";
            s.erase(it);
            i++;
        }
    }
    return 0;
}