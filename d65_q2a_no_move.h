#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
T& CP::vector_no_move<T>::operator[](int idx) {
  //your code here
  auto it=lower_bound(aux.begin(),aux.end(),idx);
  int now =it-aux.begin();
  int idxBig=now;
  if(idxBig==0){
    return mData[idxBig][idx];  
  }
  else{
    it--;
    int idxSmall=idx-*it-1;
     return mData[idxBig][idxSmall];
  }
}

template <typename T>
void CP::vector_no_move<T>::expand_hook() {
  //your code here
  //you MAY need this function
  aux.clear();
  int c=-1;
  for(int i=0;i<mData.size();i++){
    c+=(mData[i].size());
    aux.push_back(c);
  }
}

#endif
