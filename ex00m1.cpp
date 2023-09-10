#include <bits/stdc++.h>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,tmp;
    vector<int> v;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>tmp;
        v.push_back(tmp);
    }
    int c=0,i=0;
    while(true){
        for(int x:v){
            if(x==0){
                cout<<i<<'\n';
                c++;
                if(c>=m){
                    return 0;
                }
            
            }
            else if(i%x==0){
                cout<<i<<'\n';
                c++;
                if(c>=m){
                    return 0;
                }
            }
        }
        i++;
    }
    return 0;
}