#include<iostream>
#include <vector> 
#include<algorithm>
using namespace std;
int main(){
    int q,x;
    vector<int> v;
    string cmd;
    cin>>q;
    for(int i= 0;i<q;i++){
        cin>>cmd;
        if(cmd=="pb"){
            cin>>x;
            v.push_back(x);
        }
        else if(cmd=="sa"){
            sort(v.begin(),v.end());
        }
        else if(cmd=="sd"){
             sort(v.begin(),v.end(),greater<int>());
        }
        else if(cmd=="r"){
            auto l=v.begin(),r=v.end()-1;
            int tmp;
            while(r>l){
                tmp=*l;
                *l=*r;
                *r=tmp;
                l++;
                r--;
            }

        }
        else{
            cin>>x;
            v.erase(v.begin()+x);
        }
    }
    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}