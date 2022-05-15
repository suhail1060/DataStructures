


//	Transposition linear Search

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

int linearsearcht(struct Array *arr,int key)
{
	int i;
	for(i=0;i<arr->length;i++)
	{
		if(key==arr->A[i])
		{
			swap(&arr->A[i],&arr->A[i-1]);
			return i;
		}
	}
	return -1;
}

void display(struct Array arr)
{
	int k;
	printf("Elements are\n");
	for(k=0;k<arr.length;k++)
	printf("%d ",arr.A[k]);
}

int main()
{
	struct Array arr={{1,2,3,4,5},10,5};
	printf("%d\n",linearsearcht(&arr,5));
	display(arr);
	return 0;
}
