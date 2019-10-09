#include<iostream>
using namespace std;
class Complex
{
	int real,image;
	public:
		Complex()
		{
			real=0;
			image=0;
		}
		void Accept()
		{
			cout<<"Enter Real Part";
			cin>>real;
			cout<<"Enter Image part";
			cin>>image;
		}
		
		Complex operator+(Complex b1)
		{
			Complex c3;
			c3.real=real+b1.real;
			c3.image=image+b1.image;
			return c3;
		}
		Complex operator-(Complex b1)
		{
			Complex c3;
			c3.real=real-b1.real;
			c3.image=image-b1.image;
			return c3;
		}
		Complex operator*(Complex b1)
		{
			Complex c3;
			c3.real=((real*b1.real)+(real*b1.image));
			c3.image=((b1.image*image)+(image*b1.real));
			return c3;
		}
		void Display()
		{
			cout<<"real"<<real<<"+"<<"image"<<image<<"i";
		}
};
int main()
{
	Complex c1,c2,c3;
	int ch;
	char a;
	do
	{
	 
	  cout<<"1.Addition\n";
	  cout<<"2.Substraction\n";
	  cout<<"3.Mutiplication\n";
	cout<<"Enter your chioce\n";
	cin>>ch;
	
	switch(ch)
	
	{
	
	case 1:
	
	c1.Accept();
	c2.Accept();
	c3=c1+c2;
	c3.Display();
	
	break;
	
	case 2:
	
	c1.Accept();
	c2.Accept();
	c3=c1-c2;
	c3.Display();
	
	break;
	
	case 3:
	
	c1.Accept();
	c2.Accept();
	c3=c1*c2;
	c3.Display();
	
	break;
	default :
		cout<<"Wrong Input";
	
   }
   
   cout<<"Do you want to Continue";
   cin>>a;
}
while(a=='Y'||a=='y');
}
