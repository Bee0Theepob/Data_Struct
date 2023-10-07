#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  if(position==end()){
    for(auto it=first;it!=last;it++){
        (*this).push_back(*it);
      }
      return;
  }
  vector<T> result;
  for(auto ite=begin();ite!=end();ite++){
    if(ite==position){
      for(auto it=first;it!=last;it++){
        result.push_back(*it);
      }
    }
    result.push_back(*ite);
  }
  *this=result;
}

#endif
