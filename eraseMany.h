#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  vector<T> result;
  int j=0;
  for(auto it=begin();it!=end();it++){
    if(it-begin()==pos[j]){
      j++;
    }
    else{
      result.push_back(*it);
    }
  }
  *this=result;
}

#endif
