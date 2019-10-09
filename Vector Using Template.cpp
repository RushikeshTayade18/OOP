#include<iostream>
using namespace std;
template <class T>
class Vector
{
	T a[10];
	int n;
	public:
		void Accept()
		{
			cout<<"Enter how many Vector array =\n";
			cin>>n;
			cout<<"Enter Vector Elements";
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
		}
		
		void Mul()
		{
			int e;
			cout<<"\n Enter Element to Multiply =\n";
			cin>>e;
			for(int i=0;i<n;i++)
			{
				a[i]=a[i]*e;
			}
		}
		
		void Display()
		{
			
			cout<<"Vector Elements Are =";
			cout<<"{";
			for(int i=0;i<n;i++)
			{
				cout<<a[i];
				cout<<",";
			}
			cout<<"}";
		}

};
int main()
{
	Vector <int>v1;
	Vector <float> v2;
	char c;
	int ch;
	do
	{
		cout<<"1.Integer Array \n";
		cout<<"2.Float Array \n";
		cout<<"\n Enter Your Choice \n";
		cin>>ch;
		
		switch(ch)	
		{
			case 1 :
					v1.Accept();
					v1.Display();
					v1.Mul();
					v1.Display();
	
	     break;
	     
	     case 2:
	     	
	     		v2.Accept();
				v2.Display();
				v2.Mul();
				v2.Display();
	break;
	
	    default :
	    	cout<<"\nInvalid Input\n";
			}
			
			cout<<"\nDo You want to Contineu\n";
			cin>>c;	
	}
	while(c=='Y'||c=='y');

	return 0;
}
