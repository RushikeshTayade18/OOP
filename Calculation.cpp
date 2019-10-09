#include<iostream>
using namespace std;
class math
{
	float a,b;
	public:
		void Accept()
		{
			cout<<"Enter first no";
			cin>>a;
			cout<<"Enter Second No\n";
			cin>>b;
			
		}
		void Add()
		{
			cout<<"Addtion = "<<a+b;
			
		}
		void sub()
		{
			cout<<"Substraction ="<<a-b;
		}
		void mul()
		{
			cout<<"Multiplication ="<<a*b;
		}
		void Div()
		{
			cout<<"Division ="<<a/b;
		}
		
};
int main()
{
	math m1;
	m1.Accept();
	m1.Add();
	m1.sub();
	m1.mul();
	m1.Div();
	
	return 0;
	
}
