

//	LINEAR SEARCH

#include<stdio.h>

struct Array
{
	int A[10];
	int size;
	int length;
};

int Linearsearch(struct Array arr,int key)
{
	int i;
	for(i=0;i<arr.length;i++)
	{
		if(key==arr.A[i])
		  return i;
	}
	return -1;
}

void display(struct Array arr)
{
	int k;
	printf("Elements are \n");
	for(k=0;k<arr.length;k++)
	  printf("%d ",arr.A[k]);
}

int main()
{
	struct Array arr={{1,3,5,7,9},10,5};
	printf("%d\n",Linearsearch(arr,5));
	display(arr);
	return 0;
}
