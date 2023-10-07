#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::vector<T>::swap(CP::vector<T> &other) {
  // your code here
  auto ptr=mData;
  mData=other.mData;
  other.mData=ptr;
  size_t tmp=mSize;
  mSize=other.mSize;
  other.mSize=tmp;
  tmp=mCap;
  mCap=other.mCap;
  other.mCap=tmp;
}

#endif
