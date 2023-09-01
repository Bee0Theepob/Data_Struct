#include<iostream>
#include <set>
#include<vector>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,l;
    set<string> s;
    string pass;
    cin>>n>>m>>l;
    vector<int> k(l);
    for(int i = 0;i<l;i++){
        cin>>k[i];
    }
    while(n--){
        cin>>pass;
        s.insert(pass);
    }
    while(m--){
        cin>>pass;
        string result="";
        int i=0;
        for(char x:pass){
            int n=int(x)-97;
            n=97+(n+k[i])%26;
            result+=((char) n);
            i++;
        }
        if(s.find(result) != s.end()){
            cout<<"Match\n";
        }
        else{
            cout<<"Unknown\n";
        }
    }
    return 0;
}