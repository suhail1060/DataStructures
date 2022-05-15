


//	RIGHT SHIFT


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

void RShift(struct Array *arr)
{
	int i,j;
	arr->A[arr->length-1]=0;
	for(i=arr->length-2,j=arr->length-1;i>=0;i--,j--)
		swap(&arr->A[j],&arr->A[i]);

}

void display(struct Array arr)
{
	int k;
	for(k=0;k<arr.length;k++)
		printf("%d ",arr.A[k]);
}

int main()
{
	struct Array arr={{9,8,7,6,5},10,5};
	RShift(&arr);
	display(arr);
	return 0;
}
