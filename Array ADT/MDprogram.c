/*#include<stdio.h>
#include<stdlib.h>

struct Array
{
	int A[10];
	int size;
	int length;
};


void display(struct Array arr)
{
	int i;
	for(i=0;i<arr.length;i++)
	printf("%d ",arr.A[i]);
}

void Append(struct Array *arr1,int x)
{
	if(arr1->length<arr1->size)
	arr1->A[arr1->length]=x;
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

void Linearsearch(struct Array arr1)
{
	int i,key;
	printf("Enter the Element to search:\n");
	scanf("%d",key);
	for(i=0;i<arr1.length;i++)
	{
		if(key==arr1.A[i])
		return i;
			
	}
	return -1;
}

int main()
{
	struct Array arr1={{2,4,6,8,10},10,5};
	//Insert(&arr1);
	//delete(&arr1);
	
	Linearsearch(arr1);
	display(arr1);
	//free(arr1);
	return 0;
}
*/


#include<stdio.h>
#include<stdlib.h>
struct Array
{
    int A[10];
    int size;
    int length;
};

int get(struct Array arr,int index)
{
    if(index>0 && index<arr.length)
        return arr.A[index];
}

void set(struct Array *arr,int index,int key)
{
    if(index>0 && index<arr->length)
        arr->A[index]=key;
}

void display(struct Array arr)
{
    int i;
    printf("Elements are:\n");
    for(i=0;i<arr.length;i++)
        printf("%d  ",arr.A[i]);
}

int max(struct Array arr)
{
    int i;
    int max=arr.A[0];
    for(i=1;i<arr.length;i++)
    {
        if(arr.A[i]>max)
            max=arr.A[i];
    }
    return max;
}

int min(struct Array arr)
{
    int i,min;
    min=arr.A[0];
    for(i=1;i<arr.length;i++)
    {
        if(arr.A[i]<min)
            min=arr.A[i];
    }
    return min;
}

int sum(struct Array arr)
{
    int i,s=arr.A[0];
    for(i=1;i<arr.length;i++)
    {
        s+=arr.A[i];
    }
    return s;
}

float avg(struct Array arr)
{
    return (float)sum(arr)/arr.length;
}

float avgr(struct Array arr)
{
    int i,f;
    f=arr.A[0];
    for(i=1;i<arr.length;i++)
        f+=arr.A[i];
    return f/arr.length;
}

void reverse(struct Array *arr)
{
    int *B,i,j;
    B=(int*)malloc(arr->length*sizeof(int));
    for(i=arr->length-1,j=0;i>=0;i--,j++)
        B[j]=arr->A[i];
    for(i=0;i<arr->length;i++)
        arr->A[i]=B[i];
    free(B);
}

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void sreverse(struct Array *arr)
{
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--)
        swap(&arr->A[i],&arr->A[j]);
}

void lshift(struct Array *arr)
{
    int i,j;
    arr->A[0]=0;
    for(i=0,j=i+1;i<arr->length-1;i++,j++)
        swap(&arr->A[i],&arr->A[j]);
}

void lrotate(struct Array *arr)
{
    int i,j;
    for(i=0,j=i+1;i<arr->length-1;i++,j++)
        swap(&arr->A[i],&arr->A[j]);
}

void lshift1(struct Array *arr)
{
    int *B,i,j;
    B=(int*)malloc(arr->length*sizeof(int));
    for(i=1,j=0;i<arr->length;i++,j++)
        B[j]=arr->A[i];
    for(i=0;i<arr->length;i++)
        arr->A[i]=B[i];
    arr->A[arr->length-1]=0;
    free(B);
}

void rshift(struct Array *arr)
{
    int i,j;
    arr->A[arr->length-1]=0;
    for(i=arr->length-2,j=arr->length-1;i>=0;i--,j--)
        swap(&arr->A[i],&arr->A[j]);
}

void rrotate(struct Array *arr)
{
    int i,j;
    for(i=arr->length-2,j=arr->length-1;i>=0;i--,j--)
        swap(&arr->A[i],&arr->A[j]);
}

int issorted(struct Array arr)
{
    int i;
    for(i=0;i<arr.length-1;i++)
    {
        if(arr.A[i]>arr.A[i+1])
            return -1;
    }
    return 1;
}

void insertsort(struct Array *arr,int x)
{
    int i=arr->length-1;
    if(arr->length==arr->size)
        return;
    while(i>=0 && arr->A[i]>x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
}

void Rearrange(struct Array *arr)
{
    int i,j;
    i=0;
    j=arr->length-1;
    while(i<j)
    {
        while(arr->A[i]<0)
            i++;
        while(arr->A[j]>0)
            j--;
        if(i<j)
            swap(&arr->A[i],&arr->A[j]);
    }
}

struct Array* Merge(struct Array *arr1,struct Array *arr2)
{
    int i,j,k;
    i=j=k=0;

    struct Array *arr3=(struct Array*)malloc(sizeof(struct Array));

    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
            arr3->A[k++]=arr1->A[i++];
        else
            arr3->A[k++]=arr2->A[j++];
    }

    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
        arr3->A[k++]=arr2->A[j];

    arr3->length=arr1->length+arr2->length;
    arr3->size=arr1->size+arr2->size;

    //return arr3;
}

void display1(struct Array arr3)
{
    int i;
    printf("Elements are:\n");
    for(i=0;i<arr3.length;i++)
        printf("%d  ",arr3.A[i]);
}

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
            arr3->A[k]=arr1->A[i];
            i++;
            j++;
            k++;
        }
    }
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
        arr3->A[k++]=arr2->A[j];
    arr3->length=k;
    arr3->size=arr1->size+arr2->size;

    return arr3;
}

struct Array* Intersection(struct Array* arr1,struct Array *arr2)
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
        else
        {
            arr3->A[k]=arr1->A[i];
            k++;
            i++;
            j++;
        }
    }
    arr3->length=k;
    arr3->size=arr1->size+arr2->size;
}

struct Array* Difference(struct Array *arr1,struct Array *arr2)
{
    int i,j,k;
    i=j=k=0;

    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));

    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
            arr3->A[k++]=arr1->A[i++];
        else if(arr2->A[j]<arr1->A[i])
            j++;
        else
        {
            i++;
            j++;
        }
    }
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
    arr3->length=k;
    arr3->size=arr1->size+arr2->size;
    return arr3;
}

int main()
{
    struct Array arr1={{2,3,6,8,10},10,5};
    struct Array arr2={{1,3,5,6,9,11,15},10,7};
    struct Array *arr3;
    arr3=Difference(&arr1,&arr2);
    display1(*arr3);
    free(arr3);
    return 0;
}