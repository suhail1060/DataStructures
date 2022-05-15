

//	APPEND

#include<stdio.h>

struct Array
{
	int A[10];
	int size;
	int length;
};

void Append(struct Array *arr,int x)
{
	if(arr->length<arr->size)
	{
	  arr->A[arr->length++]=x;	  
	}
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
	struct Array arr={{2,4,6,8,10},10,5};
	Append(&arr,15);
	display(arr);
	return 0;
}
