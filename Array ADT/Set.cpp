

//	SET

#include<stdio.h>

struct Array
{
	int A[10];
	int size;
	int length;	
};

void Set(struct Array *arr,int index,int x)
{
	if(index>=0 && index<arr->length)
	    arr->A[index]=x;
}

void display(struct Array arr)
{
	int i;
	printf("Elements are \n");
	for(i=0;i<arr.length;i++)
	  printf("%d ",arr.A[i]);
}

int main()
{
	struct Array arr={{1,2,3,4,5,6,7},10,7};
	Set(&arr,0,88);
	display(arr);
	return 0;
}
