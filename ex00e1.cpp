#include<iostream>
using namespace std;
int main(){
    int ch,cm,t,h,m;
    cin>>ch>>cm;
    cin>>t;
    h=t/60;
    m=t%60;
    if(cm+m>=60){
        h++;
    }
    cm=(cm+m)%60;
    ch=(ch+h)%24;
    if(ch<10){
        cout<<0;
    }
    cout<<ch<<" ";
    if(cm<10){
        cout<<0;
    }
    cout<<cm;
    return 0;
}
