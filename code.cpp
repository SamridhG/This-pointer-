#include<iostream>
using namespace std;
class area
{
	int l,b,h;
	public:
		area()
		{
			cout<<"Enter lenght,breath and height:";
		}
		void setdata(int l,int b,int h )
		{
			this->l=l;
			this->b=b;
			this->h=h;
		}
		void viewdata()
		{
			cout<<"lenght="
			    <<l
			    <<endl
			    <<"Breath="<<b<<endl<<"height"<<h;
		}
};
int main()
{
	area a,*p;
	int b,c,d;
	cin>>b>>c>>d;
	p=&a;
	p->setdata(b,c,d);
	p->viewdata();
	return 0;
}
