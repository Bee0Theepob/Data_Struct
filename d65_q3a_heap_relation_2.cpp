#include <bits/stdc++.h>
#include <vector>
using namespace std;
long long get_height(long long n,long long k){
    if(k==1){
        return n-1;
    }
    else{
        return floor((log(n)+log(k-1))/log(k));
    }
}
int relation(long long S, long long a, long long b) {
    if(a>b){
        long long tmp=a;a=b;b=tmp;
    }
    if(get_height(a+1,S) == get_height(b+1,S)){
        return 4;}
    else{
        b=(b-1)/S;
        if(b==a){
            return 1;
        }
        while(b>a){
            b=(b-1)/S;
        }
        if(b==a){
            return 2;
        }
        {
            return 3;
        }
    }
}

int main() {
 ios_base::sync_with_stdio(false); cin.tie(0);
 int n;
 long long S,a,b;
 cin >> n;
 while (n--) {
 cin >> S >> a >> b;
 cout << relation(S,a,b) << " ";
 }
 cout << endl;
}
