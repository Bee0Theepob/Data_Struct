#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector-sm.h"
#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
void CP::vector_some_move<T>::insert(int index, std::vector<T> &value) {
  // Your code here
  //debug();
  int i = std::upper_bound(aux.begin(), aux.end(), index) - aux.begin();
  if (i > 0){
    index -= aux[i - 1];
  }
  std::vector<T> tmp(mData[i].begin()+index,mData[i].end());
  mData[i].resize(index);
  if(index!=0){
  push_back({});}
  push_back({});
  auto it=mData.end();it--;
  int l=2;
  if(index==0){
    l=1;
  }
  for(it;it-l!=mData.begin()+i;it--){
    *it=*(it-l);
  }
  *it=tmp;
  it--;
  *it=value;
  aux.clear();
  int c=0;
  for(int i=0;i<mData.size();i++){
    c+=(mData[i].size());
    aux.push_back(c);
  }
  mSize+=value.size();
  debug();
}

#endif