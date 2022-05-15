


//	INTERSECTION OF SORTED ARRAYS

#include<stdio.h>
#include<stdlib.h>
struct Array 
{
	int A[10];
	int size;
	int length;
};

struct Array* Intersection(struct Array *arr1,struct Array *arr2)
{
	int i,j,k;
	i=j=k=0;
	
	struct Array *arr3=(struct Array*)malloc(sizeof(struct Array));
	
	while(i<arr1->length && j<arr2->length)
	{
		if(arr1->A[i]<arr2->A[j])
			i++;
		else if(arr2->A[j]<arr1->A[i])
			j++;
		else if(arr1->A[i]==arr2->A[j])
		{
			arr3->A[k++]=arr1->A[i++];
			j++;
		}
	}
	arr3->length=k;
	arr3->size=arr1->size+arr2->size;
	
	return arr3;
}

void display(struct Array arr3)
{
	int i;
	for(i=0;i<arr3.length;i++)
		printf("%d ",arr3.A[i]);
}

int main()
{
	struct Array arr1={{1,2,3,5,8},10,5};
	struct Array arr2={{2,4,6,7,8},10,5};
	struct Array *arr3;
	arr3=Intersection(&arr1,&arr2);
	display(*arr3);
	free(arr3);
	return 0;
}
