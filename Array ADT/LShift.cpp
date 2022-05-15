


//	LEFT SHIFT

#include<stdio.h>

struct Array 
{
	int A[10];
	int size;
	int length;
};

void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

void LShift(struct Array *arr)
{
	int i,j;
	//arr->A[0]=0;//best
	for(i=0,j=i+1;i<arr->length-1;i++,j++)
	    swap(&arr->A[i],&arr->A[j]);
	//arr->A[arr->length-1]=0;
}

void display(struct Array arr)
{
	int i;
	for(i=0;i<arr.length;i++)
	   printf("%d ",arr.A[i]);
}

int main()
{
	struct Array arr={{1,2,3,4,5},10,5};
	LShift(&arr);
	display(arr);
	return 0;
}




