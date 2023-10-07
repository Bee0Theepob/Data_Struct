#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include<stack>
using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
    stack<int> result;
    int a,b;
    for(int i=0;i<v.size();i++){
        if(v[i].first==1){
            result.push(v[i].second);
        }
        else{
            if(v[i].second==0){
                b=result.top();
                result.pop();
                a=result.top();
                result.pop();
                result.push(a+b);
            }
            else if(v[i].second==1){
                b=result.top();
                result.pop();
                a=result.top();
                result.pop();
                result.push(a-b);
            }
            else if(v[i].second==2){
                b=result.top();
                result.pop();
                a=result.top();
                result.pop();
                result.push(a*b);
            }
            else if(v[i].second==3){
                b=result.top();
                result.pop();
                a=result.top();
                result.pop();
                result.push(a/b);
            }
        }
    }
    return result.top();
}

#endif