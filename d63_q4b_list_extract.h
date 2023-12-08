#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here
  if(a==b || mSize==0){
    return ;
  }
  auto it=a;
  while(it!=b){
    if(*it==value){
      auto tmp=it.ptr->next;
      it.ptr->prev->next=it.ptr->next;
      it.ptr->next->prev=it.ptr->prev;
      mSize--;

      it.ptr->next=output.mHeader->next;
      it.ptr->prev=output.mHeader;
      output.mHeader->next=it.ptr;
      it.ptr->next->prev=it.ptr;
      output.mSize++;
      it=list_iterator(tmp);
    }
    else{
      it++;
    }
  }
}

#endif





