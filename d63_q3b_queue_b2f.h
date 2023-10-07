#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::back_to_front() {
    if(mSize==mCap){
        mFront=(mFront+mSize-1)%mCap;
    }
    else{
        T tmp=back();
        mFront=(mFront+mCap-1)%mCap;
        mData[mFront]=tmp;
    }
}

#endif

//_ 2 3 4    
//2 3 _ 1    2 _ 3 1
//1 2 3 _    1 2 _ 3

//  ^
//3 _ 1 2