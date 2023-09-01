#include <iostream> 
#include <vector> 
#include <map> 
#include <stdio.h> 
#include <stdlib.h> 
using namespace std; 
map<int,string> vector_to_map(vector< pair<int,string> >::iterator start, vector< pair<int,string> >::iterator end) {
      map<int,string> result;
      for(auto it=start;it!=end;it++){
        if(result.find(it->first)==result.end()){
            result[it->first]=it->second;
        }
      } 
      return result;
    }
int main() {  
    int n,a,b;  
    cin >> n >> a >> b;  
    vector<pair<int,string>> v(n);  
    for (int i = 0;i < n;i++) { 
        cin >> v[i].first; 
    }  for (int i = 0;i < n;i++) { 
        cin >> v[i].second; 
    }  
    map<int,string> m;  
    m = vector_to_map(v.begin() + a, v.begin() + b);  
    cout << "-------- result -----------" << endl;  
    cout << "Size of map = " << m.size() << endl;  
    for (auto &x : m) {    
        cout << "(" << x.first << "," << x.second << ")" << endl;  
        } 
    }
