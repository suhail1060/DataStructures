


//	REVERSING AN ARRAY USING SWAP METHOD

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

void Reverse(struct Array *arr)
{
	int i,j;
	for(i=0,j=arr->length-1;i<j;i++,j--)
		swap(&arr->A[i],&arr->A[j]);
}

void display(struct Array arr)
{
	int i;
	for(i=0;i<arr.length;i++)
	   	printf("%d ",arr.A[i]);
}

int main()
{
	struct Array arr={{11,12,13,14,15,16,17,18,19},10,9};
	Reverse(&arr);
	display(arr);
	return 0;
}
