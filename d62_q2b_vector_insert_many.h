#ifndef __STUDENT_H_
#define __STUDENT_H_
#include<map>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
  std::map<int,T> tmp;
  for(int i=0;i<data.size();i++){
    tmp[data[i].first]=data[i].second;
  } 


  auto it=tmp.begin();
  vector<T> result;
  for(int i=0;i<=mSize;i++){
    if(i==it->first){
      result.push_back(it->second);
      it++;
    }
    if(i<mSize){
    result.push_back(mData[i]);}
  }
  *this=result;
}

#endif
