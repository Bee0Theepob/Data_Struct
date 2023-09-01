#include <iostream> 
#include <set>
using namespace std; 
int main() {  
    int n,t;
    bool check=true;
    set<int> s;
    cin>>n;
    for(int i=1;i<=n;i++){
        s.insert(i);
    }
    while(n--){
        cin>>t;
        if(s.find(t)!=s.end()){
            s.erase(t);
        }
        else{
            check=false;
        }
        
    }
     if(check){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0; 
}