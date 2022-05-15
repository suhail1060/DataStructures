


//	UNOIN OF UNSORTED ARRAYS

#include<stdio.h>
#include<stdlib.h>
struct Array
{
	int A[10];
	int size;
	int length;
};

struct Array* Union(struct Array *arr1,struct Array *arr2)
{
	int i,j,k;
	i=j=k=0;
	struct Array *arr3=(struct Array*)malloc(sizeof(struct Array));
	
	while(i<arr1->length && j<arr2->length)
	{
		if(arr1->A[i]<arr2->A[j])
			arr3->A[k++]=arr1->A[i++];
		else if(arr2->A[j]<arr1->A[i])
			arr3->A[k++]=arr2->A[j++];
		else
		{
			arr3->A[k++]=arr1->A[i++];
			j++;
		}
	}
	
	for(;i<arr1->length;i++)
	     arr3->A[k++]=arr1->A[i];
	for(;j<arr2->length;j++)
	     arr3->A[k++]=arr2->A[j];
	arr3->length=k;
	arr3->size=10;//arr1->size+arr2->size;
	
	return arr3;
}

void display(struct Array arr)
{
	int i;
	printf("Elements are\n");
	for(i=0;i<arr.length;i++)
	   printf("%d ",arr.A[i]);
}

int main()
{
	struct Array arr1={{11,2,44,5,7,98},10,6};
	struct Array arr2={{1,4,5,98,65,3},10,6};
	struct Array *arr3;
	arr3=Union(&arr1,&arr2);
	display(*arr3);
	free(arr3);
	return 0;
}
