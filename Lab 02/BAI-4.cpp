#include <iostream>
using namespace std;

class fraction
{
	public:
		int tuso;
		int mauso;
		void input();
};
void cal (fraction &a, fraction &b, char &t, char &f);

int main()
{
	fraction a, b;
	char t, f;
	cal(a, b, t, f);
	return 0;
}

void fraction::input()
{
	cin>>tuso>>mauso;
}
void cal (fraction &a, fraction &b, char &t, char &f)
{
	int c=0;
	int d=0;
	do
	{
		cout<<"Nhap tu so va mau so cua so thu nhat: ";
		a.input();
		cout<<"Nhap tu so va mau so cua so thu hai: ";
		b.input();
		cout<<"Nhap phep toan muon dung: ";
		cin>>t;
		switch (t)
		{
			case '+':
				{
					c=a.tuso*b.mauso+a.mauso*b.tuso;
					d=a.mauso*b.mauso;
					break;
				}
			case '-':
				{
					c=a.tuso*b.mauso-a.mauso*b.tuso;
					d=a.mauso*b.mauso;
					break;
				}
			case '*':
				{
					c=(a.tuso*b.tuso)/(a.mauso*b.mauso);
					d=a.mauso*b.mauso;
					break;
				}
			case '/':
				{
					c=(a.tuso/b.mauso)/(a.mauso/b.tuso);
					d=1;
					break;
				}
		}
		cout<<"\n Answer = "<<c<<"/"<<d;
		cout<<"\n Do another (y/n)?";
		cin>>f;
	}while(f=='y');
}
