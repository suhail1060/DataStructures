//	defining all class properties is must in c++

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class Rectangle
{
	private:
		int length;
		int breadth;
	public:
		Rectangle()
		{
			length=breadth=0;
			//insted garbage 0 is best
		}
		Rectangle(int l,int b)
		{
			length=l;
			breadth=b;
		}
		void setlength(int l)
		{
			length=l;
		}
		void setbreadth(int b)
		{
			breadth=b;
		}
		int area()
		{
			return length*breadth;
		}
		int perimeter()
		{
			return 2*(length+breadth);
		}
		int getlength()
		{
			return length;
		}
		int getbreadth()
		{
			return breadth;
		}
		~Rectangle()
		{
			cout<<endl<<"distructed";
		}
};
int main()
{
	Rectangle r(50,10);
	//r.Rectangle();
	//cout<<"length=";

	//cin>>r.setlength();
	//cout<<endl<<"breadth=";
	//r.setbreadth();
	cout<<endl<<"lenght is "<<r.getlength();
	cout<<endl<<"breadth is "<<r.getbreadth();
	cout<<endl<<"Area is "<<r.area();
	cout<<endl<<"Perimeter is "<<r.perimeter();
	return 0;
}
