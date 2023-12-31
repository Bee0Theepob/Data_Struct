#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <vector>

template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  for(int i=0;i<mSize;i++){
    res.push_back(mData[(mFront+i)%mCap]);
  }
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
  //write your code only here
    this->mData = new T[to-from]();
    this->mCap = to-from;
    this->mSize = mCap;
    this->mFront = 0;
    for (size_t i = 0;from!=to;i++) {
      mData[i] =*from;
      from++;
    }
    
}

#endif
