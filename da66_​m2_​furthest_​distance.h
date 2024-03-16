#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "map_bst.h"

template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT, MappedT, CompareT>::my_recur(node* n, int &aux){
	// You MAY use this function
	if(n==NULL){
        return 0;
    }
    int hl=my_recur(n->left,aux);
    int hr=my_recur(n->right,aux);
    aux=std::max(aux,hr+hl+1);
    return 1+std::max(hr,hl);
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT, MappedT, CompareT>::furthest_distance() {
	// write your code here
	int x=0;
    if(empty()){
        return -1;
    }
    my_recur(mRoot,x);
    return x;
    
}

#endif
