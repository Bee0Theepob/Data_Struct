#ifndef __STUDENT_H
#define __STUDENT_H

#include "priority_queue.h"

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::check() {
  // Your code here
  // Return something
  for(int i=0;i<mSize;i++){
    if(2*i+2>=mSize ){
      if(2*i+1>=mSize){
        return true;
      }
      else{
        if(mLess(mData[i],mData[2*i+1])){
          return false;
        }
        else{
          return true;
        }
      }
    }
    if(mLess(mData[i],mData[2*i+1]) || mLess(mData[i],mData[2*i+2])){
      return false;
    }
  }
  return true;
}

#endif