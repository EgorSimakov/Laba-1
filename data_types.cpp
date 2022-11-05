#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	cout << "int:" << sizeof(int) << "\n";
	cout << "short int:" << sizeof(short int) << "\n";
	cout << "long int:" << sizeof(long int) << "\n";
	cout << "float:" << sizeof(float) << "\n";
	cout << "double:" << sizeof(double) << "\n";
	cout << "long double:" << sizeof(long double) << "\n";
	cout << "char:" << sizeof(char) << "\n";
	cout << "bool:" << sizeof(bool) << "\n";

	//2 задание - (Вывести на экран двоичное представление в памяти целого числа.)
	cout << "\n";
	int a;
	cin >> a;
	unsigned order = sizeof(int) * 8;
	unsigned mask = pow(2, 31);
	for (int i = 1; i <= order; i++)
	{
		putchar(a & mask ? '1' : '0');
		mask >>= 1;
		if (i == 1 || i % 8 == 0)
		{
			putchar(' ');
		}

	}
	cout << '\n' << endl;

	//3 задание - (Вывести на экран двоичное представление в памяти типа float.)
	union {
		int f;
		float ix;
	};
	unsigned order1 = sizeof(int) * 8;
	unsigned mask1 = pow(2, 31);
	cin >> ix;
	for (int i = 1; i <= order1; i++)
	{
		putchar(f & mask1 ? '1' : '0');
		mask1 >>= 1;
		if (i == 1 || i % 8 == 0)
		{
			putchar(' ');
		}
	}

	//4 задание - (Вывести на экран двоичное представление в памяти типа double.)
	cout << "\n" << endl;
	union {
		double b;
		int e[2] = { 32, 32 };
	};
	unsigned order2 = sizeof(int) * 8;
	unsigned order3 = sizeof(int) * 8;
	unsigned mask2 = pow(2, 31);
	unsigned mask3 = pow(2, 31);
	cin >> b;
	for (int i = 1; i <= order3; i++)
	{
		putchar(e[1] & mask3 ? '1' : '0');
		mask3 >>= 1;
		if (i == 1 || i % 8 == 0)
		{
			putchar(' ');
		}
	}
	for (int j = 1; j <= order2; j++)
	{
		putchar(e[0] & mask2 ? '1' : '0');
		mask2 >>= 1;
		if (j % 8 == 0)
		{
			putchar(' ');
		}
	}
	cout << "\n" << endl;
}
