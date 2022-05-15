


//	AVERAGE

#include<stdio.h>

struct Array
{
	int A[10];
	int size;
	int length;
};

float Avg(struct Array arr)
{
	int i,s=0;
	for(i=0;i<arr.length;i++)
	{
	  s+=arr.A[i];
	}
	return s/arr.length;
}


//alternative method

int Sum(struct Array arr)
{
	int i,s=0;
	for(i=0;i<arr.length;i++)
	  s+=arr.A[i];
	return s;
}

float FAvg(struct Array arr)
{
	return (float)Sum(arr)/arr.length;
}

int main()
{
	struct Array arr={{1,2,3,4,5,6,7},10,7};
	printf("Avg=%f\n",FAvg(arr));
	return 0;
}
