#include<bits/stdc++.h>
using namespace std;
int main(){
    //std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //3 5 4 0 3
    int n,mFront,mSize,mCap,corr,last,ans;
    cin>>n;
    while(n--){
        cin>>mFront>>mSize>>mCap>>last>>corr;
        if(mSize>mCap || mFront>=mCap || last!=(mFront+mSize)%mCap ){
            cout<<"WRONG";
            if(corr==1){
                mFront=(last-mSize);
                while(last!=(mFront+mSize)%mCap || mFront<0){
                    mFront+=mCap;
                }
                cout<<' '<<mFront;
            }
            else if(corr==2){
                mSize=(last-mFront);
                while(last!=(mFront+mSize)%mCap || mSize<0){
                    mSize+=mCap;
                }
                cout<<' '<<mSize;
            }
            else if(corr==3){
                ans=(mFront+mSize-last);
                if(ans==0 || last!=(mFront+mSize)%ans){
                    ans=last+1;
                }
                cout<<' '<<ans;
            }
            else if(corr==4){
                last=(mFront+mSize)%mCap;
                cout<<' '<<last;
            }
            cout<<'\n';
        }
        else{
            cout<<"OK\n";
        }
    }
    return 0;
}