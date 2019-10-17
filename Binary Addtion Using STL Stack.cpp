#include<iostream>
#include<stack>
using namespace std;
class Binary
{
	stack<int>s1,s2,s3;
	int n,x;
	public:
		void Accept()
		{
			cout<<"Enter how many elements you have \n";
			cin>>n;
			cout<<"Enter elements \n";
			for(int i=0;i<n;i++)
			{
				cin>>x;
				s1.push(x);
			}
			cout<<"Enter Second Element \n";
			for(int i=0;i<n;i++)
			{
				cin>>x;
				s2.push(x);
			}
		}
		void Addtion()
		{
			int c=0,b1,b2,s;
			while(!s1.empty())
			{
				b1=s1.top();
				s1.pop();
				b2=s2.top();
				s2.pop();
				s=(b1+b2+c)%2;
				c=(b1+b2+c)/2;
				s3.push(s);
			}
			if(c==1)
			{
				s3.push(c);
			}
		}
		void Display()
		{
				while(!s3.empty())
				{
					cout<<s3.top();
					s3.pop();
				}			
		}
};
int main()
{
	 Binary b1;
	 b1.Accept();
	 b1.Addtion();
	 b1.Display();
}

