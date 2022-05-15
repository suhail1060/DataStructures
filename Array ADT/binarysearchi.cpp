

//	BINARY SEARCH
//  ITERATIVE CODE

#include<stdio.h>

struct Array
{
	int A[10];
	int size;
	int length;
};

int Binarysearch(struct Array arr,int key)
{
	int l,mid,h;
	l=0;
	h=arr.length-1;
	
	while(l<=h)
	{
		mid=(l+h)/2;
		if(arr.A[mid]==key)
		     return mid;
		else if(arr.A[mid]>key)
		     h=mid-1;
		else
		     l=mid+1;
	}
	return -1;
}

void display(struct Array arr)
{
	int i;
	printf("Elements are \n");
	for(i=0;i<arr.length;i++)
	  	printf("%d ",arr.A[i]);
}

int main()
{
	struct Array arr={{1,2,3,4,5,6,7,8},10,8};
	printf("%d \n",Binarysearch(arr,55));
	display(arr);
	return 0;
}
