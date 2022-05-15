


//	SUM OF ARRAY

#include<stdio.h>

struct Array
{
	int A[10];
	int size;
	int length;
};

int Sum(struct Array arr)
{
	int i,s=0;
	for(i=0;i<arr.length;i++)
	 s+=arr.A[i];
	return s;
}

void main()
{
	struct Array arr={{2,4,5,7,8,9},10,6};
	printf("Sum=%d",Sum(arr));
}
