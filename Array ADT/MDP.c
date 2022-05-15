//	MENU DRIVEN PROGRAM
//   All related to Array ADT in 1 program



#include<stdio.h>
#include<stdlib.h>

struct Array
{
	int A[10];
	int size;
	int length;
};

/*void create()
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
}*/

void display1(struct Array arr1)
{
	int i;
	printf("Elements of Array are;\n");
	for(i=0;i<arr1.length;i++)
		printf("%d  ",arr1.A[i]);
}

/*void display2(struct Array arr)
{
	int i;
	printf("Array contains;\n");
	for(i=0;i<arr.size;i++)
		printf("%d  ",arr.A[i]);
}*/

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

int Linearsearch(struct Array arr1,int key1)
{
	int i;
	for(i=0;i<arr1.length;i++)
	{
		if(key1==arr1.A[i])
		{
			return i;
		}
		else
		{
			return -1;
		}
		//return i;
	}
	//return -1;
}

void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

int linearsearcht(struct Array *arr1,int key)
{
	int i;
	for(i=0;i<arr1->length;i++)
	{
		if(key==arr1->A[i])
		{
			swap(&arr1->A[i],&arr1->A[i-1]);
			return i;
		}
	}
	return -1;
}

int main()
{
	int ch,k,j;
	struct Array arr1={{1,2,3,4,5},10,5};
	do
	{
	printf("\nMENU:\n");
 	//printf("1.Create \n");
 	printf("2.Append \n");
 	printf("3.Insert \n");
 	printf("4.Delete \n");
 	printf("5.Display\n");
 	printf("6.Linear Search\n");
 	printf("7.Transposition Linear search\n");
 	printf("8.Exit \n");
	printf("Enter choice:\n");
	scanf("%d",&ch);
	switch(ch)
	{	
//	case 1:
//		create();
//		break;
	case 2:
		Append(&arr1);
		break;
	case 3:
		Insert(&arr1);
		break;
	case 4:
		delete(&arr1);
		break;
	case 5:
		display1(arr1);
		break;
	case 6: 	
		printf("enter the index:\n");
		scanf("%d",&j);
		printf("%d\n",Linearsearch(arr1,j));
		break;
	case 7:
		printf("Key to search:\n");
		scanf("%d",&k);
		printf("Tranposition %d\n",linearsearcht(&arr1,k));
		break;
	default:exit(0);
		//display2(arr1);
	//free(arr1);
	}
	}while(ch>0);
	return 0;
}
