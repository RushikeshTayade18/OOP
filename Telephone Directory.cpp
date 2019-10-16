#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class Telephone
{
	int no;
	char name[20];
	public:
		void Accept()
		{
			cout<<"Enter the telephone no";
			cin>>no;
			cout<<"Enter name \n";
			cin>>name;
		}
		void Display()
		{
			cout<<"Telephone no =\n"<<no<<endl;
			cout<<"name of person =\n"<<name<<endl;
		}
		char *get_name()
		{
			return name;
		}
		int get_no()
		{
			return no;
		}
		long update(long x)
		{
			no=x;
		}
};
int main()
{
	Telephone t1;
	fstream file;
	int ch,mem;
	char a;
	int x=0;
	int no,flag=0;
	char name[20]; 
	do
	{
		cout<<"1. Insert \n";
		cout<<"2. Display \n";
		cout<<"3. Search by name \n";
		cout<<"4. Search by Number \n";
		cout<<"5. Add new \n";
		cout<<"6. modify ";
		cout<<"Enter your choice \n";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				
					file.open("tele.txt",ios::out);
					cout<<"Enter how many members you have \n";
					cin>>mem;
					for(int i=0;i<mem;i++)
					{
							t1.Accept();
							file.write((char *)&t1,sizeof(t1));
				
					}
					file.close();
				
				break;
				
				case 2:
					
							file.open("tele.txt",ios::in);
							while(1)
							{
								file.read((char*)&t1,sizeof(t1));
								if(file.eof()!=0)
								{
									break;
								}
								t1.Display();
								
							}
							file.close();
							
					break;
					
					case 3:
						
								file.open("tele.txt",ios::in);
								cout<<"Enter name to search\n";
								cin>>name;
								while(1)
								{
									file.read((char*)&t1,sizeof(t1));
									if(file.eof()!=0)
									{
										break;
									}
									if(strcmp(name,t1.get_name())==0)
									{
										flag=1;
										cout<<"name of person="<<name<<"telephone no ="<<t1.get_no();
									}
									
								}
								if(flag==0)
								{
									cout<<"No contact present \n";
								}
								file.close();
								
					break;
						
					case 4:
							
									file.open("tele.txt",ios::in);
									
									cout<<"Enter no to check \n";
									cin>>no;
									while(1)
									{
										file.read((char*)&t1,sizeof(t1));
										if(file.eof()!=0)
										{
											break;
										}
										if(no==t1.get_no())
										{
											cout<<"name of member ="<<t1.get_name();
											flag=1;
										}
									}
									if(flag==0)
									{
										cout<<"No data found \n";
										
									}
									file.close();
									
						break;
							
						case 5:
								
									file.open("tele.txt",ios::out|ios::in);
									cout<<"Enter a detail of person to add";
									t1.Accept();
									
									file.write((char*)&t1,sizeof(t1));
									file.close();
								
						break;
								
						case 6:
									
										int tell,newt;
										file.open("tele.txt",ios::in|ios::out);
										cout<<"Enter Telephone no to update \n";
										cin>>tell;
										while(1)
										{
											file.read((char*)&t1,sizeof(t1));
											if(file.eof()!=0)
											{
												break;
											}
											if(tell==t1.get_no())
											{
												flag=1;
												cout<<"Enter New tellephone no \n";
												cin>>newt;
												
												t1.update(newt);
												file.seekp(x*sizeof(t1),ios::beg);
												
												file.write((char*)&t1,sizeof(t1));
											}
											else x++;
										}
										if(flag==0)
										{
											cout<<"data can not be modify \n";
										}
						break;
									
						default :
										cout<<"Invalid Input \n";
								
				
		}
		cout<<"Do you want to contineu \n";
				cin>>a;
	}
	while(a=='Y'||a=='y');
	
	return 0;
}
