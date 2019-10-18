#include<iostream>
#include<stack>
using namespace std;
class Binary
{
	stack<int >s1,s2,s3;
	int bits,count1=0,count2=0,b1,b2;
	public:
		void Accept();
		void Add();
		void Display();
};
void Binary::Accept()
{
	char ch1,ch2;
	do
	{
		cout<<"Enter first bits\n";
		cin>>bits;
		s1.push(bits);
		count1++;
		cout<<"do you want to enter more bits \n";
		cin>>ch1;
	}
	while(ch1=='Y'||ch1=='y');
	do
	{
		cout<<"Enter Second Bits \n";
		cin>>bits;
		s2.push(bits);
		count2++;
		cout<<"do you want to enter more bits \n";
		cin>>ch2;
	}
	while(ch2=='Y'||ch2=='y');
}
void Binary::Add()
{
	int sum,carry=0;
	if(count1==count2)
	{
		while(!s1.empty())
		{
			b1=s1.top();
			s1.pop();
			b2=s2.top();
			s2.pop();
			
			sum=(b1+b2+carry)%2;
			carry=(b1+b2+carry)/2;
			
			s3.push(sum);
			
		}
		if(carry==1)
		{
			s3.push(carry);
		}
	}
	else if(count1>count2)
	{
		while(!s2.empty())
		{
			b1=s1.top();
			s1.pop();
			b2=s2.top();
			s2.pop();
			
			sum=(b1+b2+carry)%2;
			carry=(b1+b2+carry)/2;
			
			s3.push(sum);
		}
		while(!s1.empty())
		{
			b1=s1.top();
			s1.pop();
			b2=0;
			
			sum=(b1+b2+carry)%2;
			carry=(b1+b2+carry)/2;
			
			s3.push(sum);
		}
		if(carry==1)
		{
			s3.push(carry);
		}
	}
	else if(count1<count2)
	{
		while(!s1.empty())
		{
			b1=s1.top();
			s1.pop();
			b2=s2.top();
			s2.pop();
			
			sum=(b1+b2+carry)%2;
			carry=(b1+b2+carry)/2;
			
			s3.push(sum);
		}
		while(!s2.empty())
		{
			b1=0;
			
			b2=s2.top();
			s2.pop();
			
			sum=(b1+b2+carry)%2;
			carry=(b1+b2+carry)/2;
			
			s3.push(sum);
		}
		if(carry==1)
		{
			s3.push(carry);
		}
	}
}
void Binary::Display()
{
	while(!s3.empty())
	{
		cout<<s3.top();
		s3.pop();
	}
}
int main()
{
	Binary b1;
	b1.Accept();
	b1.Add();
	b1.Display();
	
	return 0;
}
