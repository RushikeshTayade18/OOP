#include<iostream>
#include<list>
using namespace std;
void Disp_Q(list<int> q)
{
	list<int>::iterator i;
	cout<<"Elements of Queue\n";
	for(i=q.begin();i!=q.end();i++)
	{
		cout<<*i<<"";
	}
}
void Disp_s(list<int> s)
{
	list<int>::iterator i;
	cout<<"Elements of Stack \n";
	for(i=s.begin();i!=s.end();i++)
	{
		cout<<*i<<"";
	}
}
int main()
{
	list<int> q;
	list<int> s;
	int ch,val;
	char a;
	
	do
	{
		cout<<"1.Enter element is stack \n";
		cout<<"2.display element of stack \n";
		cout<<"3.Delete element from strack \n";
		cout<<"4.Insert element in Que \n";
		cout<<"5.delete Element from Que \n";
		cout<<"6. Display element from que \n";
		cout<<"Enter your choice \n";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<"Enter element to Insert \n";
				cin>>val;
				s.push_back(val);
				break;
			
			case 2:
			    	 cout<<"Display\n";
			    	 Disp_s(s);
			    	 break;
			  
			 case 3:
			 		cout<<"Element is Deleted \n";
					 s.pop_back();
					 break;
		
		 	case 4:
			 		cout<<"Enter element to insert in Qu\n";
					 cin>>val;
					 q.push_back(val);
					break;
					
						 			    	 
			case 5:
					cout<<"Element is deleted from que \n";
					q.pop_front();
					break;
					
			case 6:
					cout<<"elements are =\n";
					Disp_Q(q);
					
					break;
					
			default:
			     cout<<"Wrong input \n";				
						
		}
		
		
		cout<<endl<<"Do you want to contineu \n";
		cin>>a;
	}
	while(a=='Y'||a=='y');
	
	
	return 0;
	
}




