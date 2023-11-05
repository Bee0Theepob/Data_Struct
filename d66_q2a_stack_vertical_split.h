#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "stack.h"

template <typename T>
void CP::stack<T>::v_split(std::vector<std::stack<T>> &output, size_t k) const {
  // Write code here
    std::stack<T> tmp0;
    for(int i=0;i<k;i++){
        output.push_back(tmp0);
    }
    stack<T> tmp=*this;
    std::vector<int> sizz(k);
    int n=mSize/k;
    for(int i=0;i<k;i++){
        sizz[i]=n;
    }
    n=mSize%k;
    for(int i=0;i<n;i++){
        sizz[i]++;
    }
    n=0;
    while(!tmp.empty()){
        stack<T> tmp1;
        for(int i=0;i<sizz[n];i++){
            tmp1.push(tmp.top());
            tmp.pop();
        }
        while(!tmp1.empty()){
            output[n].push(tmp1.top());
            tmp1.pop();
        }
        n++;
    }
}

#endif
