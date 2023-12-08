#include <bits/stdc++.h>
using namespace std; 
void printS(stack<pair<int ,int>> &s){
    if(!s.empty()){
        pair<int ,int> x=s.top();
        s.pop();
        printS(s);
        for(int i=0;i<x.second;i++){
            cout<<x.first<<' ';
        }
    }
}
int main() {  
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,p,c,tmp;
    bool trig=false;
    stack<pair<int,int>> stk;
    cin>>n>>p>>c;
    vector<int> v;
    for(int i=0;i<n;i++){
        if(i==p){
            v.push_back(c);
        }
        cin>>tmp;
        v.push_back(tmp);
    }
    if(p==n){
        v.push_back(c);
    }

    stk.push({v[0],1});
    int i=1;
    while(i<v.size()){
        tmp=v[i];
        if(stk.empty()){
            stk.push({tmp,0});
            continue;
        }
        if(i==p){
            trig=true;
        }
        if(!trig){
            if(stk.top().first==tmp){
                stk.top().second++;
            }
            else{
                stk.push({tmp,1});
            }
        }
        else{
            if(stk.top().first == tmp){
                int count=stk.top().second+1;
                int j=1;
                while(i+j<v.size() && v[i+j]==tmp){
                    count++;
                    j++;
                }
                if(count>=3){
                    stk.pop();
                    i+=j-1;
                }
                else{
                    trig=false;
                    stk.top().second++;
                }
            }
            else{
                stk.push({tmp,1});
                if(tmp!=c){
                trig=false;}
            }
        }
        i++;
    }
    printS(stk);
    

}