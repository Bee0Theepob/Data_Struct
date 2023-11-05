#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
  //write your code here
  //can include anything
  std::vector<T> r;
  CP::priority_queue<T,Comp> tmp(mLess);
  for(int i=pow(2,k)-1;i<pow(2,k+1)-1;i++){
    if(i>=mSize){
      break;
    }
    tmp.push(mData[i]);
  }
  while(!tmp.empty()){
    r.push_back(tmp.top());tmp.pop();
  }
  return r;
}

#endif

