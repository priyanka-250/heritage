#include<iostream>
#include<string.h>
using namespace std;

class animals{
	public:
			
				int age;
				char name[100];
				public:
			void set_value(int age,char name[])
			{
				this->age;
				strcpy(this-> name,name);
			}
			
};

class zebra :public animals{
	public:
		void get()
		{
			cout<<"zebra age= "<<age<<endl;
			cout<<"zebra name="<<name<<endl;
			cout<<"zebra plains zebra spped 65km/h"<<endl;
			cout<<"zebra genus equss"<<endl;
			
		}
};
class Dolphin :public animals{
	public:
		void show()
		{
			cout<<"dolphin age= "<<age<<endl;
			cout<<"dolphin name="<<name<<endl;
			cout<<"dolphin age 50-90 years"<<endl;
			cout<<"dolphin has 3 type"<<endl;
			cout<<"dolphin 1 type orca"<<endl;
			cout<<"dolphin 2 type striped dolphin"<<endl;
			cout<<"dolphin 3 type pantropical spotted dolphin"<<endl;
		}
};
int main()
{
	zebra z;
	Dolphin a;
	z.set_value(25,"plains");
	z.get();
	a.set_value(55,"orca");
	a.show();
	

	return 0;
	
}
