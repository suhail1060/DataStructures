

//	ARRAY INTRO

//Declaration and initialising

/*#include<stdio.h>

int main()
{
	int A[5];
		//declaration 
	int B[5]={1,2,3,4,5};
		//declaration & initialise
	int C[8]={1,5,7};
		//other 5 also 0
	int D[5]={0};
		//all 0
	int E[]={1,2,3,4,5};
		//size by no. of elements
	return 0;
}*/


//addresses of array elements

#include<stdio.h>

int main()
{
	int A[5]={1,2,3,4,5};
	int i;
	for(i=0;i<5;i++)
		printf("%u \n",&A[i]);
	return 0;
}

