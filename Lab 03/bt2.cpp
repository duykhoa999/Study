#include <iostream>

using namespace std;

class Employees
{
	private: 
		int E_number;
		float E_compensation;
		int years;
	public:
		void Input();
		void Display();
		void Money();
};

int main()
{
	Employees a;
	a.Input();
	a.Display();
	a.Money();
	return 0;
}

void Employees::Input()
{
	cout << "Nhap so nhan vien: ";
	cin >> E_number;
	cout << "Nhap so tien ban co ban dau: ";
	cin >> E_compensation;
	cout << "Nhap so nam: ";
	cin >> years;
}

void Employees::Display()
{
	cout << "So nhan vien la: " <<  E_number;
	cout << "\nSo tien BHXH: " << E_compensation;
	cout << "\nTham nien bao nhieu nam: " << years;
}

void Employees::Money()
{
	for(int i = 1; i <= years; i++)
	{
		E_compensation += E_compensation * 0.055;
	}
	cout << "\nSo tien nhan duoc sau " << years << "nam: "<< E_compensation;
}
