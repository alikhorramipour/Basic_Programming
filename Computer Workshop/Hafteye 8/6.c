#include<stdio.h>
#include<stdlib.h>
#include<iostream>

void sevap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void Cyclic_Swap(int *a, int *b, int *c)
{
	sevap(a, b);
	sevap(b, c);
	//sevap(c, a);
}

using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter First Number:";
	cin >> a;
	cout << "Enter Second Number:";
	cin >> b;
	cout << "Enter Third Number:";
	cin >> c;
	Cyclic_Swap(&a, &b, &c);
	cout << "First Number:" << a << endl << "Second Number:" << b << endl << "Third Number:" << c << endl;
	system("pause");
	return 0;
}