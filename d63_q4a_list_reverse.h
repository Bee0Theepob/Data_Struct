#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
  //write your code here
  int c=0;
  while(a!=b){
    a++;
    c++;
  }
  for(int i=0;i<c;i++){
    a--;
  }
  auto it1=a,it2=b;
  it2--;
  for(int i=0;i<c/2;i++){
    T tmp=*it1;
    *it1=*it2;
    *it2=tmp;
    it1++;
    it2--;
  }
  return a;
}

#endif
