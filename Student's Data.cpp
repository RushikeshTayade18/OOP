#include<iostream>
using namespace std;
class Student
{
	 int roll,age;
	 char name[20];
	 
	 public:
	 	static int total;
	 	void get()
	 	{
	 		total++;
	 		roll=total;
	 		
	 		cout<<"Enter the age\n";
	 		cin>>age;
	 		cout<<"Enter name\n";
	 		cin>>name;
		 }
		 void Display()
		 {
		 	cout<<"RollNO ="<<roll<<"\t"<<"Age is="<<age<<"\t"<<"name"<<name<<endl;
		 	
		 }
		 static void disp_total()
		 {
		 	cout<<"total no of students are =\n"<<total;
		 }
};
int Student::total=0;
int main()
{
	Student s[10];
	int n;
	cout<<"how many Students you have =\n";
	cin>>n;
	
	for(int i;i<n;i++)
	{
		s[i].get();
	}
	
	cout<<"\n******* Student Info ********\n";
	
	
	for(int i=0;i<n;i++)
	{
		s[i].Display();
	}
	
	Student::disp_total();
	
	return 0;
	
	
}
