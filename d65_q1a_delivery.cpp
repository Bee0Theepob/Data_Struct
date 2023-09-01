#include<iostream>
#include <queue>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,a,b,c;
    queue<int> m1,m2;
    vector<int> mon={0};
    cin>>n>>m;
    vector<int> target(m);
    for(int i= 0;i<m;i++){
        cin>>target[i];
    }
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==1){
            cin>>b>>c;
            if(b==1){
                m1.push(c);
            }
            else{
                m2.push(c);
            }
        }
        else{
            if(!m1.empty() && m2.empty()){
                mon.push_back(mon[mon.size()-1]+m1.front());
                m1.pop();
            }
            else if(m1.empty() && !m2.empty()){
                mon.push_back(mon[mon.size()-1]+m2.front());
                m2.pop();
            }
            else{
                if(m1.front()<=m2.front()){
                    mon.push_back(mon[mon.size()-1]+m1.front());
                    m1.pop();
                }
                else{
                    mon.push_back(mon[mon.size()-1]+m2.front());
                    m2.pop();
                }
            }
        }
    }
    for(int i=0;i<m;i++){
        auto it=lower_bound(mon.begin(),mon.end(),target[i]);
        if(it==mon.end()){
            cout<<-1<<" ";
        }
        else{
            cout<<it-mon.begin()<<" ";
        }
    }
    return 0;
}