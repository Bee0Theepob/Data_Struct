#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  while(K--){
      if(empty()){
        break;
      }
      else{
        pop();
      }
    }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  std::stack<T> tmp,result;
    while(K--){
      if(empty()){
        break;
      }
      else{
        tmp.push(top());
        pop();
      }
    }
    while(!tmp.empty()){
      result.push(tmp.top());
      tmp.pop();
    }
    return result;
  //don't forget to return an std::stack

}

#endif
