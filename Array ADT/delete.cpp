

//	DELETE

#include<stdio.h>


struct Array
{
	int A[10];
	int size;
	int length;
};
void display(struct Array arr)
{
	int i;
	
	for(i=0;i<arr.size;i++)
		printf("%d ",arr.A[i]);
}

int Delete(struct Array *arr,int index)
{
	int X=0;
	int i;
	
	//if(index>=0 && index<arr->length)
	if(index>=0 && index<arr->length)
	{
		X=arr->A[index];
		for(i=index;i<arr->length-1;i++)
			arr->A[i]=arr->A[i+1];
		arr->length--;
		return X;
	}
	return 0;	
}



int main()
{
	struct Array arr={{278,84,622,148,201},10,5};
	printf("%d\n",Delete(&arr,2));
	display(arr);
		
	return 0;
}
