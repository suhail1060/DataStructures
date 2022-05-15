

//	INSERTING ELEMENT IN SORTED ARRAY

#include<stdio.h>

struct Array
{
	int A[10];
	int size;
	int length;
};

void Insertsort(struct Array *arr,int x)
{
	int i=arr->length-1;
	if(arr->length==arr->size)
		return;
	while(i>=0 && arr->A[i]>x)
	{
		arr->A[i+1]=arr->A[i];
		i--;
	}
	arr->A[i+1]=x;
	arr->length++;
}

void display(struct Array arr)
{
	int i;
	for(i=0;i<arr.length;i++)
	 	printf("%d ",arr.A[i]);
}

int main()
{
	struct Array arr={{21,33,34,45,66,67,78},10,7};
	Insertsort(&arr,20);
	display(arr);
	return 0;
}
