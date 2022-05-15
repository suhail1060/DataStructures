

//	INSERT

#include<stdio.h>

struct Array
{
	int A[10];
	int size;
	int length;
};

void Insert(struct Array *arr,int index,int x)
{
	int i;
	if(index>=0 && index<=arr->length)
	{
		for(i=arr->length;i>index;i--)
		  arr->A[i]=arr->A[i-1];
	      arr->A[index]=x;
	      arr->length++;
	}
}

void display(struct Array arr)
{
	int i;
	printf("Elements are\n");
	for(i=0;i<arr.size;i++)
	 	printf("%d ",arr.A[i]);
}

int main()
{
	struct Array arr={{1,3,5,7,9},10,5};
	Insert(&arr,2,77);
	display(arr);
	return 0;
}
