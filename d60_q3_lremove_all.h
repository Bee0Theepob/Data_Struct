#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T& value) {
  //write your code here
  for(auto it=begin();it!=end();it++){
    if(*it==value){
      auto tmp=it.ptr->prev;
      it.ptr->prev->next=it.ptr->next;
      it.ptr->next->prev=it.ptr->prev;
      mSize--;
      delete it.ptr;
      it=list_iterator(tmp);
    }
  }
}

#endif
