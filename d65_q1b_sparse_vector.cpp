#include <iostream>
#include <vector>
#include <map>
using namespace std;
void insert_into_sv(map<int,int> &v, int pos, int value) {
    auto it=v.lower_bound(pos);
    vector<pair<int,int>> tmp;
    for(auto ite=it;ite!=v.end();ite++){
        tmp.push_back({ite->first,ite->second});
    }
    for(int i=0;i<tmp.size();i++){
        v.erase(tmp[i].first);
    }
    v.insert(v.begin(),{pos,value});
    for(int i=0;i<tmp.size();i++){
        v.insert(v.end(),{1+tmp[i].first,tmp[i].second});
    }
    }

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n;
    map<int,int> v;
    cin >> n;
    for (int i = 0;i < n;i++) {
        int a,b;
        cin >> a >> b;
        insert_into_sv(v,a,b);
        }
    cout << v.size() << "\n";
    for (auto &x : v) {
        cout << x.first << ": " << x.second << "\n";
        }
}