#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
  vector<T> result(2*mSize);
  int i=0;
  auto it=begin();
  for(it;it!=end();it++){
    result[i]=*it;
    i++;
  }
  it=end();it--;
  for(it;it!=begin();it--){
    result[i]=*it;
    i++;
  }
  result[i]=*it;
  *this=result;

}

#endif
