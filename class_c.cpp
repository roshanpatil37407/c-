#include<iostream>
using namespace std;
class student{
	private:
		int rn;
		char name[];
	public:
		void read()
		{
		cout<<"\n enter Roll No:";
		cin>>rn;
		cout<<"\n enter Name";
		cin>>name;	
		}
		void print()
		{
			cout<<"\n Inforamtio of Student You Entered";
			cout<<"\n Roll No :"<<rn;
			cout<<"\n Name  :"<<name;
		}
};
int main()
{
	student info;
	info.read();
	info.print();
}
