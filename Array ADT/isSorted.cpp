


//	CHECK IF ARRAY IS SORTED OR NOT

#include<stdio.h>

struct Array
{
	int A[10];
	int size;
	int length; 
};

int isSorted(struct Array arr)
{
	int i;
	for(i=0;i<arr.length-1;i++)
	{
		if(arr.A[i]>arr.A[i+1])
		     return 0;
	}
	return 1;
}

int main()
{
	struct Array arr={{11,144,13,14,15},10,5};
	printf("%d",isSorted(arr));
	
	return 0;
}
