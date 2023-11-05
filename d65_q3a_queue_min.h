#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos,Comp comp) const {
  //your code here
  T minn;
  int i=0;
  for(i;i<pos.size();i++){
    if(pos[i]>=0 && pos[i]<mSize){
      minn=mData[(mFront+pos[i])%mCap];
      break;
    }
  }
  i++;
  for(i;i<pos.size();i++){
     if(pos[i]>=0 && pos[i]<mSize){
       if(comp(mData[(mFront+pos[i])%mCap],minn)){
         minn=mData[(mFront+pos[i])%mCap];
       }
     }
  }
  //should return something
  return minn;
}

#endif
