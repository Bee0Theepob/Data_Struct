#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {
  //write your code here
  if(mSize!=other.mSize){
    return false;
  }
  CP::priority_queue<T,Comp> a=*this;
  CP::priority_queue<T,Comp> b=other;
  while(!a.empty() && a.top()==b.top()){
    a.pop();
    b.pop();
  }
  if(a.empty()){
    return true;
  }
  else{
    return false;
  }
}

#endif
