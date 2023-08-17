#include <iostream> 
#include <vector> 
using namespace std; 
void remove_even(vector<int> &v,int a,int b) {  
    vector<int> result;
    for(int i=0;i<v.size();i++){
        if(i>=a && i<=b){
            if(i%2==1){
                result.push_back(v[i]);
                }
            }
        else{
            result.push_back(v[i]);
            }
        }
        v=result;
    } 
    int main() {  
        //read input  
        int n,a,b;  
        cin >> n;  
        vector<int> v;  
        for (int i = 0;i < n;i++) {   
            int c;    
            cin >> c;    
            v.push_back(c);  
            }  
            cin >> a >> b;  
            //call function  
            remove_even(v,a,b);  
            //display content of the vector  
            for (auto &x : v) {    
                cout << x << " ";  
            }  
        cout << endl; }