

//	MENU DRIVEN PROGRAM
//   All related to Array ADT in 1 program



#include<stdio.h>
#include<stdlib.h>

struct Array
{
	int *A;
	int size;
	int length;
};

void create()
{
	struct Array arr1;
	printf("Enter the Size of an ARRAY:\n");
	scanf("%d",&arr1.size);
	arr1.A=(int *)malloc(arr1.size*sizeof(int));
	arr1.length=0;
	if(arr1.A=NULL)
	 printf("Failed\n");
	printf("success\n");
	free(arr1.A);
}

void display1(struct Array arr1)
{
	int i;
	printf("Elements of Array are;\n");
	for(i=0;i<arr1.length;i++)
		printf("%d  ",arr1.A[i]);
}

void display2(struct Array arr)
{
	int i;
	printf("Array contains;\n");
	for(i=0;i<arr.size;i++)
		printf("%d  ",arr.A[i]);
}

void Append(struct Array *arr1)
{
	int x;
	printf("Enter element to be added;\n");
	scanf("%d",&x);
	if(arr1->length<arr1->size)
		arr1->A[arr1->length++]=x;
}

void Insert(struct Array *arr1)
{
	int index,x,i;
	printf("Enter index to insert:\n");
	scanf("%d",&index);
	printf("Enter Element to insert:\n");
	scanf("%d",&x);
	if(index>=0 && index<=arr1->length)
	{
		for(i=arr1->length;i>index;i--)
		   arr1->A[i]=arr1->A[i-1];
		arr1->A[index]=x;
		arr1->length++;
	}
}

void delete(struct Array *arr1)
{
	int i,x=0,index;
	printf("Enter the Index to delete:\n");
	scanf("%d",&index);
	if(index>=0 && index<arr1->length)
	{
		x=arr1->A[index];
		for(i=index;i<arr1->length-1;i++)
		     arr1->A[i]=arr1->A[i+1];
		arr1->length--;
		printf("Deleted\n");
	}
}

int main()
{
	struct Array arr1;
	create();
	Append(&arr1);
	display1(arr1);
	Insert(&arr1);
	delete(&arr1);
	//display2(arr1);//error!!
	display(arr1);
	return 0;
}
