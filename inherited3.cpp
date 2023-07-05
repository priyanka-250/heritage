#include<iostream>
#include<string.h>
using namespace std;

class a{
	public:
		int id;
		char name[100];
		int salary;
		char email[100];
		
		
		void setdata()
		{
			cout<<"employee id=";
			cin>>id;
			cout<<"employee name=";
			cin>>name;
			cout<<"employee salary=";
			cin>>salary;
			cout<<"employee email=";
			cin>>email;
		}
			
		
};
class b {
	public:
		
		int experience;
		char contact[10];
				
		void display()
		
			
		{
			
			cout<<"employee experience";
			cin>>experience;
			cout<<"employee contact";
			cin>>contact;
						
		}
		
};
class c :public a ,public b{

	public:
		
			void get()
		{
			cout<<"employee id="<<id<<endl;
			cout<<"employee name="<<name<<endl;
			cout<<"employee salary="<<salary<<endl;
			cout<<"employee email="<<email<<endl;
			cout<<"employee experience="<<experience<<endl;
			cout<<"employee contact="<<contact<<endl;
		}
	
};
int main()
{
	c p;
	p.setdata();
	p.display();
	p.get();
	
	return 0;
}
