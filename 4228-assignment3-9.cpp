#include<iostream>
using namespace std;
class distance
{
	public:
		int ft1;
		float in1;
		void get()
		{
			cout<<"enter the values";
			cin>>ft1>>in1;
		}
		
			
		
};
class total:public distance
{
	public:
		int ft2,ft3;
		float in2,in3;
		void getdata()
		{
			cout<<"enter the values";
			cin>>ft2>>in2;
		}
		void add()
		{
			ft3=ft1+ft2;
			in3=in1+in2;
		}
		void display()
		{
			cout<<"feet is "<<ft3<<"\n"<<"inches is "<<in3;
		}
};
int main()
{
	total t;
	t.get();
	t.getdata();
	t.add();
	t.display();
return 0;
}
