// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "math.h"
using namespace std;


int main()
{
	float a = 4.8, b = -7.9;
	float n,m;
	cout << "a = "<<a<<endl;
	cout << "b = " << b << endl;
	if (a >= b)
	{
		n = pow((a-b), 1.0/3.0);
	}
	else
	{
		n = pow(a, 2) + ((a - b) / (sin(a*b)));
	}
	cout << "n = " << n << endl;
	if (n < b)
	{
		m = ((n + a) / -b) + pow(pow(sin(a), 2) - cos(n), 0.5);
	}
	if (n == b)
	{
		m = pow(b, 2) + tan(n*a);
	}
	else
	{
		m = pow(b, 3) + n * pow(a, 2);
	}
	cout << "m = " << m << endl;
	system("pause");
    return 0;
}

