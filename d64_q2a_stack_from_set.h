#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
    auto it =first;
    int cap=0;
    while(it!=last){
      cap++;
      it++;
    }
    this->mData = new T[cap]();
    this->mCap = cap;
    this->mSize = cap;
    it--;;
    for (int i = 0;i < cap;i++) {
      mData[i] = *it;
      it--;
    }
}

#endif
