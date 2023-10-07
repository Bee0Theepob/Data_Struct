#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::vector<std::pair<T,size_t>> result;
    std::map<T,int> tmp;
    for(int i=mFront;i<mFront+mSize;i++){
        tmp[mData[i]]+=1;
    }
    for(int i=0;i<k.size();i++){
        result.push_back({k[i],tmp[k[i]]});
    }
    return result;
}

#endif
