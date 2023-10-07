#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"
#include <iostream>
template <typename T>
size_t CP::stack<T>::size() const {
  //write your code here
  return v.size();
}

template <typename T>
const T& CP::stack<T>::top() const {
  return v[v.size()-1];
}

template <typename T>
void CP::stack<T>::push(const T& element) {
  //write your code here
  v.push_back(element);
}

template <typename T>
void CP::stack<T>::pop() {
  //write your code here
  v.erase(v.end()-1);
}

template <typename T>
void CP::stack<T>::deep_push(const T& element, int depth) {
  //write your code here
  v.push_back(element);
  int i=v.size()-1;
  for(i;i>=depth;i--){
    if(i==0){
      break;
    }
    v[i]=v[i-1];
  }
  v[i]=element;
  
}

template <typename T>
void CP::stack<T>::multi_push(const std::vector<T> &w) {
  //write your code here
  for(T x:w){
    push(x);
  }
}

template <typename T>
void CP::stack<T>::pop_until(const T& e) {
  //write your code here
  while(top()!=e){
    if(empty()){
      break;
    }
    pop();
  }
}

#endif