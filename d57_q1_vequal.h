#ifndef __STUDENT_H_
#define __STUDENT_H_
#include<iostream>
template <typename T>
bool CP::vector<T>::operator==(const vector<T> &other) const {
  //write your code only in this function
  if(other.mSize!=this->mSize){
    return false;
  }
  for(int i=0;i<other.mSize;i++){
    if(mData[i]!=other.mData[i]){
      return false;
    }
  }
  return true;
}

#endif
