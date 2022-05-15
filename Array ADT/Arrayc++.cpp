


//	ARRAY USING C++



#include<iostream>
using namespace std;

class Array
{
	private:
		int *A;
		int length;
		int size;
		
	public:
		Array()
		{
			size=10;
			length=0;
			A=new int[size];
		}
		Array(sz)
		{
			size=sz;
			length=0;
			A=new int[size];
		}
		~Array()
		{
			delete []A;
		}
		void swap();
		void display();
		void Append(int x);
		void Insert(int index,int x);
		int delete(int index);
		int linearsearch(int key);
		int binarysearch(int key);
		int Get(int index);
		void set(int index,int x);
		int Max();
		int MIn();
		int Sum();
		floar Avg;
		void Reverse();
		void Reverse2;
		void Insertsort(int x);
		int isSorted();
		void Rearrange();
		Array* Merge(Array arr2);
		Array* Union(Array arr2);
		Array* Intersection(Array arr2);
		Array* Difference(Array arr2);
};

void Array::display()
{
	cout<<"Elements are:\n";
	for(int i=0;i<length;i++)
		cout<<A[i]<<" ";
}

void Array::Append(int x)
{
	if(length<size)
	   A[length++]=x;
}

void Array::Insert(int index,int x)
{
	if(index>=0 && index<length)
	{
		for(i=length;i>index;i--)
		    A[i]=A[i+1];
		A[i+1]=x;
		length++;
	}
}

int Array::delete(int index)
{
	int x=0;
	if(index>=0 && index<length)
	{
		x=A[index];
		for(int i=index;i<length;i++)
		     A[i]=A[i+1];
		length--;
		return x;
	}
	return 0;
}

int Array::linearsearch(int key)
{
	for(int i=0;i<length;i++)
	{
		if(key==A[i])
		   return i;
	}
	return -1;
}

int Array::binarysearch(int key)
{
	int l=0,mid,h=length-1;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(A[mid]=key)
		   return mid;
		else if(A[mid]>key)
		    h=mid-1;
		else
		    l=mid+1;
	}
	return -1;
}

int Array::Get(int index)
{
	if(index>=0 && index<length)
	  	return A[index];
}

void Array::set(int index,int x)
{
	if(index>=0 && index<length)
	        	A[index]=x;
}

int Array::Max()
{
	int x=A[0];
	for(int i=1;i<length;i++)
	{
		if(A[i]>x)
		   x=A[i];
	}
	return x;
}

int Array::MIn()
{
	int x=A[0];
	for(int i=0;i<length;i++)
	{
		if(A[i]<x)
		    X=A[i];
	}
	return x;
}

int Array::Sum()
{
	int s=0;
	for(i=0;i<length;i++)
	    	s+=A[i];
	return s;
}

float Array::Avg()
{
	return (float)sum/length;
}

void Array::Reverse()
{
	int i,j,*B;
	B=new int[length];
	for(i=length-1,j=0;i>=0;i--,j++)
	   B[j]=A[i];
	for(i=0;i<length;i++)
	   A[i]=B[i];
	free(B);
}

void Array::swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

void Array::Reverse2()
{
	int i,j;
	for(i=0,j=length-1;i<j;i++,j--)
		swap(&A[i],&A[j]);
}

void Array::Insertsort(int x)
{
	int i=length-1;
	if(length==size)
		return;
	while(i>=0 && A[i]>x)
	{
		A[i+1]=A[i];
		i--;
	}
	A[i+1]=x;
	length++;
}

int Array::isSorted()
{
	for(int i=0;i<length;i++)
	{
		if(A[i]>A[i+1])
		    return 0;
	}
	return 1;
}

void Array::Rearrange()
{
	int i=0,j=length-1;
	while(i<j)
	{
		while(A[i]<0)i++;
		while(A[j]>=0)j++;
		if(i<j)
		  swap(&A[i],&A[j]);
	}
}

Array* Array::Merge(Array arr2)
{
	int i=j=k=0;
	Array *arr3=new Array(length+arr2.length);
	
	while(i<length && j<arr2.length)
	{
		if(A[i]<arr2.A[j])
		  arr3->A[k++]=A[i++];
		else
		  arr3->A[k++]=arr2.A[i++];
	}
	
	for(;i<length;i++)
		arr3->A[k++]=A[i];
	for(;j<arr2.length;j++)
		arr3->A[k++]=arr2.A[j];
	arr3->length=length+arr2.length;
	arr3->size=size+arr2.size;
	
	return arr3;
}

Array *Array::Union(Array arr2)
{
	int i,j,k=0;
	Array *arr3=new Array(length+arr2.length);
	
	while(i<length && j<arr2.length)
	{
		if(A[i]<arr2.A[j])
		    arr3->A[k++]=A[i++];
		else if(arr2.A[j]<A[i])
		    arr3->A[k++]=arr2.A[j++];
		else
		{
			arr3->A[k++]=A[i++];
			j++;
		}
	}
	for(;i<length;i++)
		arr3->A[k++]=A[i];
	for(;j<arr2.length;j++)
		arr3->A[k++]=arr2.A[j];
	arr3->length=k;
	
	return arr3;
}



int main()
{
	
	
	return 0;
}
