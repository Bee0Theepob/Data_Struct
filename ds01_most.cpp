#include <iostream> 
#include <map> 
using namespace std; 
int main() { 
    int n;
    string word;
    map<string,int> m;
    cin>>n;
    while(n--){
        cin>>word;
        m[word]++;
    }
    for(auto it = m.begin();it!=m.end();it++){
        if(it->second>=n){
            n=it->second;
            word=it->first;
        }
    }
    cout<<word<<" "<<n;
    return 0; 
    }