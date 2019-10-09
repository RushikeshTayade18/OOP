#include<iostream>
#include<list>
using namespace std;
class Dque
{
	list <int>l;
	int val;
	public:
		void insert_front()
		{
			
			cout<<"Enter Element to insert from front\n";
			cin>>val;				
			l.push_front(val);
		}
		void Insert_rear()
		{
			cout<<"Enter Element to insert form rear\n";
			cin>>val;
			l.push_back(val);
		}
		void pop_front1()
		{
		
			l.pop_front();
		
		}
		void pop_rear()
		{
			l.pop_back();
		}
		void Display()
		{
			list<int>::iterator i;
			cout<<"values are =\n";
			for(i=l.begin();i!=l.end();i++)
			{
				cout<<*i;
			}
			
		}
};
int main()
{
	Dque d1;
	char a;
	int ch;
	do
	{
	
	cout<<"1.Insert front\n";
	cout<<"2.Insert back\n";
	cout<<"3.delete front\n";
	cout<<"4.delete back\n";
	cout<<"5.Display\n";
	cout<<"Enter choise\n";
	cin>>ch;
	
	switch(ch)
	{
		
		case 1:
		
			d1.insert_front();
	  
	  break;
	  case 2:
	  
			d1.Insert_rear();
	
	  break;
	
	case 3:
		
			d1.pop_front1();
	
	break;
	
	case 4:
		
			d1.pop_rear();
	break;
	
	case 5:
		
	d1.Display();
	
	break;
	
	default :
		cout<<"Wrong Input\n";
	
	
}
cout<<"Do you want to contineu\n";
	cin>>a;

}
while(a=='Y'||a=='y');
}
