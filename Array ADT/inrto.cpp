


//	ARRAY ADT

//array in heap

/*#include<stdio.h>
#include<stdlib.h>

struct Array
{
	int *A;
	int size;
	int length;
};

void display(struct Array arr)
{
	int i;
	for(i=0;i<arr.length;i++)
		printf("%d  ",arr.A[i]);
}

int main()
{
	struct Array arr;
	int i,n;
	printf("Enter size of an Array:");
	scanf("%d",&arr.size);
	arr.A=(int*)malloc(arr.size*sizeof(int));
	arr.length=0;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
		scanf("%d",&arr.A[i]);
	arr.length=n;
	display(arr);
	free(arr.A);
	return 0;
}*/


//array in stack

#include<stdio.h>

struct Array
{
	int A[20]	;
	int size;
	int length;
};

void display(struct Array arr)
{
	int i;
	printf("Elements are\n");
	for(i=0;i<arr.length;i++)
		printf("%d  ",arr.A[i]);
}

int main()
{
	struct Array arr={{2,4,6,8,9},10,5};
	display(arr);
	return 0;
}
