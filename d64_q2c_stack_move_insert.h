#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  //your code here
  stack<T> tmp;
  while(k--){
    tmp.push(top());
    pop();
  }
  while(m--){
    if(s2.empty()){
      break;
    }
    tmp.push(s2.top());
    s2.pop();
  }
  while(!tmp.empty()){
    push(tmp.top());
    tmp.pop();
  }
}
#endif
