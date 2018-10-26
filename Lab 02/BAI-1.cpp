#include <iostream>
using namespace std;

typedef struct 
{
	int areacode;
	int exchange;
	int number;
} phonenumber;

void inf (phonenumber &a);
void display (phonenumber a, phonenumber b);

int main()
{
	phonenumber a, b;
	b={212,767,8900};
	inf(a);
	display(a, b);
	return 0;
}

void inf (phonenumber &a)
{
	cout<<"Enter your area code, exchange, and number: ";
	cin>>a.areacode>>a.exchange>>a.number;
	return;
}
void display (phonenumber a, phonenumber b)
{
	cout<<"My number is: ("<<b.areacode<<") "<<b.exchange<<" - "<<b.number<<endl;
	cout<<"Your number is: ("<<a.areacode<<") "<<a.exchange<<" - "<<a.number;
	return;
}

