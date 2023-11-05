#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "vector.h"
#include<set>
template <typename T>
void CP::vector<T>::range_erase(std::vector<std::pair<iterator, iterator>> &ranges) {
  // Write code here
    vector<T> result;
    map<int,int> pos;
    for(int i=0;i<ranges.size();i++){
        pos[ranges[i].first-begin()]++;
        pos[ranges[i].second-begin()]--;
    }
    int c=0;
    for(int i=0;i<mSize;i++){
        c+=pos[i];
        if(c==0){
            result.push_back(mData[i]);   
        }
        
    }
    *this=result;
}

#endif
