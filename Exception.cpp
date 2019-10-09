#include<iostream>
#include<cstring>
using namespace std;
class Exp
{
	int age;
	float salary;
	char car;
	string city;
	public:
		void Accept()
		{
			cout<<"Enter age";
			cin>>age;
			cout<<"Enter salary";
			cin>>salary;
			cout<<"Do you have a car(Y/n)";
			cin>>car;
			cout<<"Enter city name";
			cin>>city;
		}
		void check()
		{
			try
			{
			
			if(age>55||age<18)
			throw(age);
			
			if(salary>100000||salary<50000)
			throw(salary);
			
			if(car=='N')
			throw(car);
			
			if
			(city=="PUNE"||city=="MUMBAI"||city=="AURANGABAD"||city=="NAGPUR");
			else throw(city);
		
		cout<<"preson is high class youth";
		}
		catch(int)
		{
			cout<<"incorect age";
		}
		catch(float)
		{
			cout<<"income is not in the range";
		}
		catch(char)
		{
			cout<<"you must have 4 wheeler";
		}
		catch(string)
		{
			cout<<"you are not belongs to requird city";
		}
		
}

};

int main()
{
	Exp e1;
	e1.Accept();
	e1.check();
	return 0;
}


