#include<bits/stdc++.h>
using namespace std;
int get_height(int n,int k){
    if(k==1){
        return n-1;
    }
    else{
        return ceil(log(n*k-n)/log(k))-1;
    }
}
int main(){
    int k;
    cin>>k;
    for(int i=0;i<20;i++){
        cout<<get_height(i+1,k)<<'\n';
    }
}