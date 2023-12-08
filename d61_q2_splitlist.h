#ifndef __STUDENT_H_
#define __STUDENT_H_

void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    int a=(mSize/2);
    if(mSize%2!=0){
        a++;
    }
    int b=mSize-a;
    auto it=begin();
    for(int i=0;i<a;i++){
        auto tmp=it.ptr->next;
        it.ptr->prev=list1.mHeader->prev;
        it.ptr->next=list1.mHeader;
        list1.mHeader->prev->next=it.ptr;
        list1.mHeader->prev=it.ptr;
        mSize--;
        list1.mSize++;
        it=list_iterator(tmp);
    }
    for(int i=0;i<b;i++){
        auto tmp=it.ptr->next;
        it.ptr->next=list2.mHeader;
        it.ptr->prev=list2.mHeader->prev;
        list2.mHeader->prev->next=it.ptr;
        list2.mHeader->prev=it.ptr;
        mSize--;
        list2.mSize++;
        it=list_iterator(tmp);
    }
    mHeader->next=mHeader;
    mHeader->prev=mHeader;
}
#endif