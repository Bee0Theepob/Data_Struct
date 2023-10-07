#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  if(b<a){
    auto it=a;
    a=b;
    b=it;
  }
  if((a<begin() || a>=end()) 
    || (a+m-1<begin() || a+m-1>=end()) 
    ||(b<begin() || b>=end()) 
    || (b+m-1<begin() || b+m-1>=end())
    ){
    return false;
  }
  if(a+m-1>=b || m==0){
    return false;
  }
  else{
    while(m--){
      T tmp=*a;
      *a=*b;
      *b=tmp;
      a++;
      b++;
    }
    return true;
  }
}

#endif
