
#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    int now=(mFront+pos)%mCap;
    T tmp=mData[now];
    while(pos--){
        mData[now]=mData[(now-1+mCap)%mCap];
        now=(now-1+mCap)%mCap;
    }
    mData[now]=tmp;
}

#endif