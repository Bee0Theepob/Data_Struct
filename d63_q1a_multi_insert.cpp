#include <iostream>
#include <vector>
using namespace std;
void multiple_add(vector<int> &v, int value, int position, int count) { //write your code here
   if(position==v.size()){
      while(count--){
        v.push_back(value);
      }
    }
    else{
       vector<int> result;
    for(int i=0;i<v.size();i++){
      if(i==position){
        while(count--){
          result.push_back(value);
        }
      }
      result.push_back(v[i]);
    }
      v=result;
    }
}
int main() {
  std::ios_base::sync_with_stdio(false);
  cin.tie(0);
int n,value,position,count;
cin >> n >> value >> position >> count; vector<int> v(n);
for (int i = 0; i < n; i++) cin >> v[i];
multiple_add(v,value,position,count);
  cout << "After call multiple_add" << endl << "Size = " << v.size() << endl;
  for (auto &x : v) cout << x << " ";
  cout << endl;
 }