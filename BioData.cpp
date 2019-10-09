#include<iostream>
using namespace std;
class Personal
{
	char name[20],gender,add[30];
	int age;
	public:
		void Accept_per()
		{
			cout<<"\nEnter name \n";
			cin>>name;
			cout<<"\nEnter Age =\n";
			cin>>age;
			cout<<"\nEnter Gender (M/F)=\n";
			cin>>gender;
			cout<<"\nEnter Address =\n";
			cin>>add;
		}
		void Display_per()
		{
			cout<<"\nName =\n"<<name;
			cout<<"\nAge =\n"<<age;
			cout<<"\nGender =\n"<<gender;
			cout<<"\nAdderess =\n"<<add;
		}

};
class Academic
{
	float per;
	char college[30];
	char deprt[20];
	
	public:
		void Accept_Aca()
		{
			cout<<"\nEnter Percentage = \n";
			cin>>per;
			cout<<"\nEnter College name \n";
			cin>>college;
			cout<<"\nEnter department name =\n";
			cin>>deprt;
		}
		void Display_Aca()
		{
			cout<<"\nPercentage = \n"<<per;
			cout<<"\nCollege Name =\n"<<college;
			cout<<"\nDepartment Name =\n"<<deprt;
		}
};
class Profession
{
	char profe[30];
	int Exp;
	float Income;
	
	public:
		void Accept_pro()
		{
			cout<<"\nEnter Profession =\n";
			cin>>profe;
			cout<<"\nEnter your Experience =\n";
			cin>>Exp;
			cout<<"\nEnter Your Income =\n";
			cin>>Income;
		}
		void Display_pro()
		{
			cout<<"\nProfession =\n"<<profe;
			cout<<"\nExperience =\n"<<Exp;
			cout<<"\nIncome =\n"<<Income;
		}
		
};

class BioData:public Personal,public Academic,public Profession
{
	public:
		void Accept()
		{
			cout<<"/n****** Enter Personal Information ******/n";
			Accept_per();
			cout<<"/n****** Enter  Academic Information ******/n";
			Accept_Aca();
			cout<<"/n******  Enter Profession Information ******/n";
			Accept_pro();
		}
		void Display()
		{
			cout<<"/n******Personal Information ******/n";
			Display_per();
			cout<<"/n******Academic Information ******/n";
			Display_Aca();
			cout<<"/n******Profession Information ******/n";
			Display_pro();
			
		}
};
int main()
{
	BioData b1;
	b1.Accept();
	b1.Display();
}
