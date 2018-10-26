#include <iostream>
#include<math.h>
using namespace std;

void inf(double &money, double &year, double &rate);
void result(double money, double year, double rate);

int main()
{
	double money, rate, year;
	inf(money, year, rate);
	result(money, year, rate);
	return 0;
}

void inf(double &money, double &year, double &rate)
{
	cout<<"Nhap so tien ban muon gui: ";
	cin>>money;
	cout<<"Nhap so nam ban muon gui: ";
	cin>>year;
	cout<<"Nhap ti le lai suat hang nam: ";
	cin>>rate;
}
void result(double money, double year, double rate)
{
	double s=money*pow(1+rate/100, year);
	cout<<"Vay tong so tien chung toi se tra ban sau "<<year<<" nam la: "<<s;
}
