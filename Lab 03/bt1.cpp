#include <iostream>

using namespace std;

class Time
{
	private:
		int hours;
		int minutes;
		int seconds;
	public: 
		void Input();
		void Display();
		void Reset();
		void Add(Time a, Time b);
};

int main()
{
	Time a, b, c;
	c.Reset();
	c.Add(a, b);
	c.Display();
	return 0;
}

void Time::Input()
{
	do
	{
		cout << "\nNhap gio: ";
		cin >> hours;
	}while(hours < 0 || hours > 24);
	do
	{
		cout << "Nhap phut: ";
		cin >> minutes;
	}while(minutes < 0 || minutes > 60);
	do
	{
		cout << "Nhap giay: ";
		cin >> seconds;
	}while(seconds < 0 || seconds > 60);
}

void Time::Display()
{
	cout << hours << ":" << minutes << ":" << seconds;
}

void Time::Reset()
{
	hours = 0;
	minutes = 0;
	seconds = 0;
}

void Time::Add(Time a, Time b)
{
	a.Reset();
	cout << "Nhap gio thu hai: ";
	b.Input();
	cout << "Thoi gian 1: ";
	a.Display();
	cout << "\nThoi gian 2: ";
	b.Display();
	seconds = a.seconds + b.seconds;
	if(seconds > 59)
	{
		seconds -= 60;
		minutes ++;
	}
	minutes = a.minutes + b.minutes;
	if(minutes > 59)
	{
		minutes -= 60;
		hours ++;
	}
	hours = a.hours + b.hours;
	if(hours > 24)
	{
		hours -= 24;
	}
	cout << "\nThoi gian tong: ";
}
