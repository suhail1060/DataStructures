



//	REVERSING AN ARRAY

#include<stdio.h>
#include<stdlib.h>

struct Array
{
	int A[10];
	int size;
	int length;
};

void Reverse(struct Array *arr)
{
	int *B;
	int i,j;
	B=(int *)malloc(arr->length*sizeof(int));
	for(i=arr->length-1,j=0;i>=0;i--,j++)
	      B[j]=arr->A[i];
	for(i=0;i<arr->length;i++)
	      arr->A[i]=B[i];
	free(B);
}

void display(struct Array arr)
{
	int i;
	for(i=0;i<arr.length;i++)
	   printf("%d ",arr.A[i]);
}

int main()
{
	struct Array arr={{1,2,3,4,5,6,7,8,9},10,9};
	Reverse(&arr);
	display(arr);
	return 0;
}
