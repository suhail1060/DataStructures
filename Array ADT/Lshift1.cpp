

//	LEFT SHIFT METHOD 2

#include<stdio.h>
#include<stdlib.h>
struct Array
{
	int A[10];
	int size;
	int length;
};

void Lshift(struct Array *arr)
{
	int i,j;
	int *B;
	arr->A[0]=0;
	B=(int*)malloc(arr->length*sizeof(int));
	for(i=1,j=0;i<arr->length-1;i++,j++)
	  B[j]=arr->A[i];
	for(i=0;i<arr->length;i++)
	  arr->A[i]=B[i];
	//arr->A[arr->length]=0;
	free(B);

}

void display(struct Array arr)
{
	int i;
	for(i=0;i<arr.length;i++)
		printf("%d ",arr.A[i]);
}

int main()
{
	struct Array arr={{11,22,33,44,55,66,77,88},10,8};
	Lshift(&arr);
	display(arr);
	return 0;
}
