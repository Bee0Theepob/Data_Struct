#ifndef __STUDENT_H_
#define __STUDENT_H_


void shift(int k) {
	// TODO: Add your code here
	
	auto it=begin();
	whikle(k<0){
		k+=mSize;
	}
	for(int i=0;i<k%mSize;i++){
		it++;
	}
	insert(it,0);
	mHeader->prev->next=mHeader->next;
	mHeader->next->prev=mHeader->prev;
	mHeader=it.ptr->prev;
	mSize--;
}
#endif