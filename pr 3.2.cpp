// Lab_03_2.cpp
// < прізвище, ім’я автора >
// Лабораторна робота No 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 0.1
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double a; // вхідний параметр
	double b; // вхідний параметр
	double c; // вхідний параметр
	double F; // результат обчислення виразу
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;
	
	if (a < 0 && x != 0)
		F =(a*(x*x))+((b*b)*x);
	else
		if (a > 0 && x == 0)
			F = x-(a/(x-c));
		else
			F = 1+ (x/c);
	cout << " F = " << F << endl;
	//повне розгалуження
	if (x <= -0.1)
		B = 5 * cos(18 * x);
	else
		if (x > 1.2)
			B =1 / (tan(x) + 18);
		else
			B = atan((x + 2) / 5);
	y = A - B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}
