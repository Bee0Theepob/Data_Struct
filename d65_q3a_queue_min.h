#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos,Comp comp) const {
  //your code here
  std::vector<T> tmp;
  for(int i=0;i<pos.size();i++){
    if(pos[i]>=mSize){
      continue;
    }
    tmp.push_back(mData[(mFront+pos[i])%mCap]);
  }
  sort(tmp.begin(),tmp.end(),comp);
  //should return something
  return tmp[0];
}

#endif