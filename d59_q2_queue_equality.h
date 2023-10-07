#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::queue<T>::operator==(const CP::queue<T> &other) const {
  //write your code here
  if(mSize!=other.mSize){
    return false;
  } 
  int idxa=mFront,idxb=other.mFront;
  for(int i=0;i<mSize;i++){
    if(mData[idxa]!=other.mData[idxb]){
      return false;
    }
    idxa++;
    idxb++;
  }
  return true;

  // YOU CANNOT CALL push or pop
}

#endif
