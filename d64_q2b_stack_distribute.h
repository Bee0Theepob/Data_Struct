#ifndef __STUDENT_H__
#define __STUDENT_H__
#include<vector>
template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  //write your code here
  CP::stack<T> tmp=*this;
  std::vector<std::vector<T>> result(k);
  std::vector<int> round(k,(mSize/k));
  if(mSize%k!=0){
    int plus=mSize%k;
    for(int i=0;i<plus;i++){
      round[i]+=1;
    }
  }
  // for(int x:round){
  //   std::cout<<x<<' ';
  // }
  int i=0;
  for(i;i<k;i++){
    for(int j=0;j<round[i];j++){
      result[i].push_back(tmp.top());
      tmp.pop();
    }
  }
  return result;

}
#endif
