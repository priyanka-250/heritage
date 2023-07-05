#include<iostream>
#include<string.h>
using namespace std;

class mother{
	public:
		void display()
		{
			cout<<"i love my daugther"<<endl;
		}
};

class daugther :public mother{
	public:
		void display()
		{
			cout<<"i love my mom"<<endl;
		}
};
int main()
{
	daugther d;
	mother a;
	d.daugther::display();
	a.display();
	return 0;
}

