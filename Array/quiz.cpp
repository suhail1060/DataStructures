

//	ARRAY QUIZ

//2.

#include<stdio.h>
int main()
{
	unsigned int X[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
 	printf("%u %u %u",X+3,*(X+3),*(X+3)+3);
	return 0;
}
