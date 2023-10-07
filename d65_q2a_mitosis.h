#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b){
    CP::stack<T> tmp;
    int i=0;
    while(i<=b){
        if(i>=a && i<=b){
            tmp.push(top());
        }
        tmp.push(top());
        pop();
        i++;
    }
    while(!tmp.empty()){
        push(tmp.top());
        tmp.pop();
    }
    
}

#endif

//10 20 30 40 50 60
//10 20 30 30 40 50 50 60