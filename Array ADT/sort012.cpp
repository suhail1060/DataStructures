#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;

}
int main()
{
    int A[]={1,2,0,0,2,2,1,1,2};
    int l,m,h;
    l=0;    
    m=0;
    h=sizeof(A)/sizeof(A[0])-1;
    //printf("%d\n",h);
    while(m<=h)
    {
        switch (A[m])
        {
        case 1:
            m++;
            break;
        case 0:
            swap(&A[m++],&A[l++]);
            break;
        case 2:
            swap(&A[m],&A[h--]);
            break;
        default:
            break;
        }
    }
    for(int i=0;i<=sizeof(A)/sizeof(A[0])-1;i++)
        printf("%d  ",A[i]);
    return 0;
}