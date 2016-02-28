#include<stdio.h>
/*
	Name: ListUsingArray.c
	Author: Vishnu Mohan G.
	Date: 21-02-16 16:29
	Description: Implementation of list using array.
*/

typedef struct CustList{
	int data[10];
	int count;
}List;

void shift(List *l, int start, int offset){
	int i = 0, temp = 0;
	for(i=l->count - offset-1; i >=start; i++){
		l->data[i+offset] = l->data[i];
		l->data[i] = 0; 
	}
}

void main(){
	struct List list;
	list->data = {1,2,3,4,5,6,7,8,9,10};
	list.count = 10;
	shift(*list, 3, 2);
	int j;
    for( j = 0; j < 10; j++) {
        printf("%d ", list->data[j]);
    } 
}
