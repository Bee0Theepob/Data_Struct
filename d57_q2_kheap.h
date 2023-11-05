#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>
#include<set>

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
    T tmp=mData[idx];
    while(idx>0){
        int p=(idx-1)/4;
        if(mLess(tmp,mData[p])){break;}
        mData[idx]=mData[p];
        idx=p;
    }
    mData[idx]=tmp;
}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
    T tmp=mData[idx];
    while(4*idx+1<mSize){
        T tMax=mData[4*idx+1],c=4*idx+1;
        for(int i=2;i<=4;i++){
            if(4*idx+i>=mSize){break;}
            if(mData[4*idx+i]>=tMax){
                c=4*idx+i;
                tMax=mData[c];
            }
        }
        
        if(mLess(mData[c],tmp)){break;}
        mData[idx]=mData[c];
        idx=c;
    }
    mData[idx]=tmp;
}

#endif

