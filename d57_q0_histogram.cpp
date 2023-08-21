#include <iostream> 
#include<map>
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
        if(it->second>=2){
            cout<<it->first<<" "<<it->second<<"\n";
        }
    }
    return 0; 
}