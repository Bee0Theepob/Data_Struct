#include <iostream> 
#include <vector> 
using namespace std; 
long long mSize=0,mCap=1;

void push(int k){
    while(mSize+k>mCap){
        k-=(mCap-mSize);
        mSize=mCap;
        mCap*=2;
    }
    mSize+=k;
}


int main() {  
    ios_base::sync_with_stdio(false);cin.tie(0);
    long long cmd,k;
    int t;
    cin>>t;
    while(t--){
        cin>>cmd>>k;
        if(cmd==0){
            push(k);
        }
        else{
            mSize-=k;
        }
    }
    cout<<mCap-mSize;
    return 0;
    
}