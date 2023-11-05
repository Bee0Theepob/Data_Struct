#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  //write your code here
  //can include anything
  CP::priority_queue<T,Comp> tmp(mLess);
  for(int i=0;i<pow(2,k)-1;i++){
    if(i>=mSize){
      break;
    }
    tmp.push(mData[i]);
  }
  k--;
  while(k--){
    tmp.pop();
  }
  return tmp.top();
}

#endif
