


// 	ARRAY as PARAMETER
//call by address only

/*#include<stdio.h>

void fun(int A[],int n)//A[] or *A for array
{
	int i;
	for(i=0;i<n;i++)
		printf("%d\n",A[i]);
}
int main()
{
	int A[]={6,7,8,9,10};
	//int n=5;//manual declare
	int n=sizeof(A)/sizeof(int);//finds size
	//printf("%d",n);
	fun(A,n);
	return 0;
}*/

//**By passing address we can change data in array by using
//  function

/*#include<stdio.h>

void fun(int A[])
{
	A[3]=29;
}
int main()
{
	int i;
	int A[5]={4,5,6,7,8};
	fun(A);
	for(i=0;i<5;i++)
		printf("%d\n",A[i]);
	return 0;
}*/

//**Creating array in heap and accessing it in heap

#include<stdio.h>
#include<stdlib.h>
int *fun(int size)
{
	int *p,i;
	p=(int*)malloc(size*sizeof(int));
	for(i=0;i<size;i++)	
		p[i]=i+1;
	//free(p);
	return p;	
}
int main()
{
	int *ptr,sz=9,i;
	ptr=fun(sz);
	for(i=0;i<sz;i++)
		printf("%d\n",ptr[i]);
	
	return 0;
}
