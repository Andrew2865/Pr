// Lab_03_1.cpp
// < Штогрина Андрія >
// Лабораторна робота No 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 9


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; 
	double y; 
	double A; 
	double B; 
	cout << "x = "; cin >> x;
	A = 2*(x * x* x);
	if (x <= -0.1)
		B = 5*cos(18*x);
	if (-0.1 <= x && x <= 1.2)
		B = atan((x+2)/5);
	if (x > 1.2)
		B = 1/(tan(x)+18);
	y = A - B;
	cout << endl;
	cout << "y = " << y << endl;
	
	сin.get();
	return 0;
}
