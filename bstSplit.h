#ifndef __STUDENT_H_
#define __STUDENT_H_
#include<vector>
template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  //your code here
  CP::map_bst<KeyT,MappedT,CompareT> result;
  bool have=false;
  if(find(val)==end()){
    insert({val,MappedT()});
    have=true;
  }
  std::vector<KeyT> tmp;
  for(auto it=find(val);it!=end();it++){
    result.insert(*it);
    tmp.push_back(it->first);
  }
  for(auto x:tmp){
    erase(x);
  }
  
  if(have){
  result.erase(val);}
  return result;
}

#endif
