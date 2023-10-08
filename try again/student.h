#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  if(a>b){
    auto it=a;
    a=b;
    b=it;
  }
  if(m<=0){
    return false;
  }
  if((a<begin() || a>=end()) || (b<begin() || b>=end()) || (a+m-1<begin() || a+m-1>=end()) || (b+m-1<begin() || b+m-1>=end()) || a+m-1>=b){
    return false;
  }
  vector<T> tmp(m);
  for(int i=0;i<m;i++){
    tmp[i]=*(a+i);
  }
  for(int i=0;i<m;i++){
    *(a+i)=*(b+i);
  }
  for(int i=0;i<m;i++){
    *(b+i)=tmp[i];
  }
  return true;
}

#endif
