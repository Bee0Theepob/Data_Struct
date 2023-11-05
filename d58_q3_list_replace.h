void replace(const T& x, list<T>& y) {
    //write your code here
    auto it=begin();
    while(it!=end()){
        if(*it==x){
          for(auto ity=y.begin();ity!=y.end();ity++){
            insert(it,*ity);
          }
          erase(it);
        } 
        it++;
    }
}
