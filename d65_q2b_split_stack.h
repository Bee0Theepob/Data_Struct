#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>
#include <vector>

template <typename T>
std::vector<std::vector<T>>  CP::stack<T>::split_stack(int k) const {
  //your code here
  
  // std::vector<std::vector<T>> result(k,std::vector<T> (0,5));
  std::vector<std::vector<T>> result(k);
  for(int i=0;i<k;i++){
    stack<T> tmp;
    int j=mSize-1-i;
    while(j>=0){
      tmp.push(mData[j]);
      j-=k;
    }
    while(!tmp.empty()){
      result[i].push_back(tmp.top());
      tmp.pop();
    }
  }
  return result;
  //should return something


  
}

#endif

