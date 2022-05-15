

//	MAXIMUM

#include<stdio.h>

struct Array
{
	int A[10];
	int size;
	int length;
};

int Max(struct Array arr)
{
	int i,max=arr.A[0];
	for(i=1;i<arr.length;i++)
	{
		if(arr.A[i]>max)
		  max=arr.A[i];
	}
	return max;
}
int main()
{
	struct Array arr={{2,45,6,8,10},10,5};
	printf("Max=%d\n",Max(arr));
	return 0;
}
