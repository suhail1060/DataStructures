


//	+VE & -VE ON EITHER SIDES

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

void Rearrange(struct Array *arr)
{
	int i,j;
	i=0;
	j=arr->length-1;
	while(i<j)
	{
		while(arr->A[i]<0)i++;
		while(arr->A[j]>0)j--;
		if(i<j)
		  swap(&arr->A[i],&arr->A[j]);
	}
}

void display(struct Array arr)
{
	int i;
	for(i=0;i<arr.length;i++)
	printf("%d ",arr.A[i]);
}

int main()
{
	struct Array arr={{-1,12,14,13,-5,-15,7,-9},10,8};
	Rearrange(&arr);
	display(arr);
	return 0;
}
