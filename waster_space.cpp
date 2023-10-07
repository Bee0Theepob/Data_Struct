#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long n,m,ans;
    cin>>n;
    if(n==1){
        cout<<0;
        return 0;
    }
    m=ceil(log(n)/log(2));  
    ans=pow(2,m)-n;
    cout<<ans;
}