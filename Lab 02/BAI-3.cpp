#include <iostream>
using namespace std;

void cal (float &a, float &b, char &t, char &d);

int main()
{
	float a, b;
	char t, d;
	cal(a, b, t, d);
	return 0;
}

void cal (float &a, float &b, char &t, char &d)
{
	float s=0;
	do
	{
		cout<<"Enter first number, operator, second number: ";
		cin>>a>>t>>b;
		switch (t)
		{
			case '+':
				{
					s=a+b;	
					break;
				}
			case '-':
				{
					s=a-b;
					break;
				}
			case '*':
				{
					s=a*b;
					break;
				}
			case '/':
				{
					s=a/b;
					break;
				}
		}
		cout<<"\n Answer = "<<s;
		cout<<"\n Do another (y/n)?";
		cin>>d;
	}while(d=='y');
}
	
