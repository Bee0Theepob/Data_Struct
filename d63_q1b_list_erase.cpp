#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
void list_erase(vector<int> &v, vector<int> &pos) {
    vector<int> result;
    sort(pos.begin(),pos.end());
    int j=0;
    for(int i=0;i<v.size();i++){
        if(i==pos[j]){
            j++;
        }
        else{
            result.push_back(v[i]);
        }
    }
    v=result;
}
int main() {
 std::ios_base::sync_with_stdio(false);
 cin.tie(0);
 int n,m;
 cin >> n >> m;
 vector<int> v(n), pos(m);
 for (int i = 0;i < n;i++) cin >> v[i];
 for (int i = 0;i < m;i++) cin >> pos[i];
 list_erase(v,pos);
 cout << "After call list_erase" << endl << "Size = " << v.size() << endl;
 for (auto &x : v) cout << x << " ";
 cout << endl;
}