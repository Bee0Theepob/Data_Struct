#ifndef __STUDENT_H_
#define __STUDENT_H_
#include<cmath>
template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  //write your code here
  // if you use std::vector, your score will be half (grader will report score BEFORE halving)
  int maxx;
  if(mSize>other.mSize){
    maxx=mSize;
  }
  else{
    maxx=other.mSize;
  }
  for(int i=0;i<maxx;i++){
    if(i==mSize && i<other.mSize){
      return true;
    }
    else if(i<mSize && i==other.mSize){
      return false;
    }
    if(mData[i]==other.mData[i]){
      continue;
    }
    else if(mData[i]<other.mData[i]){
      return true;
    }
    else{
      return false;
    }
  }
  return false;
}

#endif