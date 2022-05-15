


//	MOVE TO HEAD LINEAR SEARCH

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

int linearsearchm(struct Array *arr,int key)
{
	int i;
	for(i=0;i<arr->length;i++)
	{
		if(key==arr->A[i])
		{
			swap(&arr->A[i],&arr->A[0]);
			return i;
		}
	}
	return -1;
}

void display(struct Array arr)
{
	int i;
	printf("Elements are\n");
	for(i=0;i<arr.length;i++)
		printf("%d ",arr.A[i]);
}

int main()
{
	struct Array arr={{1,3,5,7,9},10,5};
 	printf("%d ",linearsearchm(&arr,9));
 	display(arr);
	return 0;
}
