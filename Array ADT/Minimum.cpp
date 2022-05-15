

//	MINIMUM

#include<stdio.h>

struct Array
{
	int A[10];
	int size;
	int length;
};

int Min(struct Array arr)
{
	int i,min=arr.A[0];
	for(i=1;i<arr.length;i++)
	{
		if(arr.A[i]<min)
		  min=arr.A[i];
	}
	return min;
}

int main()
{
	struct Array arr={{5,66,2,88,99,33},10,6};
	printf("Min=%d\n",Min(arr));
	return 0;
}
