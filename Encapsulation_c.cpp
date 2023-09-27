#include<iostream>
using namespace std;
class roshan
{
	int No;
	char name[10];
	public:
		int read()
		{
			cout<<"\nEnter the information of student";
			cin>>No;
	        cin>>name;
		}
		int print()
		{
			cout<<"\n enter the No :"<<No;
			cout<<"\n enter the name :"<<name;
		}
};
int main()
{
	roshan obj;
	obj.read();
	obj.print();
	return 0;
}
