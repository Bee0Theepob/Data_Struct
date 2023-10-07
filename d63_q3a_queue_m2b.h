#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  //write your code here
  int now=(mFront+pos)%mCap;
  T tmp=mData[(mFront+pos)%mCap];
  pos=mSize-pos-1;
  while(pos--){
    mData[now]=mData[(now+1)%mCap];
    now=(now+1)%mCap;
  }
  mData[now]=tmp;
}

#endif
