#include <iostream> 
#include <vector> 
#include<algorithm>
using namespace std; 
int main() { 
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m,k,p;
    vector<int> s;
    cin>>n>>m>>k;
    while(n--){
        cin>>p;
        s.push_back(p);
    }
    sort(s.begin(),s.end());
    while(m--){
        cin>>p;
        cout<<(upper_bound(s.begin(),s.end(),p+k))-(lower_bound(s.begin(),s.end(),p-k))<<" ";
    }
    return 0; 
    }