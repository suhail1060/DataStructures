

//	GET

#include<stdio.h>

struct Array
{
	int A[10];
	int size;
	int length;
};

int Get(struct Array arr,int index)
{
	if(index>=0 && index<arr.length)
	     return arr.A[index];
 	return -1;
}

int main()
{
	struct Array arr={{11,12,13,14,15,16},10,6};
	printf("Get=%d\n",Get(arr,9));

	return 0;
}
