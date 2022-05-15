


//	RECURSIVE BINARY SEARCH

#include<stdio.h>

struct Array
{
	int A[10];
	int size;
	int length;
};

int RBinarysearch(int a[],int l,int h,int key)
{
	int mid;
	if(l<=h)
	{
		mid=(l+h)/2;
		if(a[mid]==key)
		  return mid;
		else if(a[mid]>key)
		  return RBinarysearch(a,l,mid-1,key);
		else
		  return RBinarysearch(a,mid+1,h,key);
	}
	return -1;
}

void display(struct Array arr)
{
	int i;
	for(i=0;i<arr.length;i++)
	  printf("%d ",arr.A[i]);
}

int main()
{
	struct Array arr={{11,12,13,14,15,16,17},10,7};
	printf("%d\n",RBinarysearch(arr.A,0,arr.length,15));
	display(arr);
	return 0;
}
