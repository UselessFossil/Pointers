#include<iostream>

using std::cout;
using std::cin;
using std::endl;

#define tab "\t"

void Exchange(int& a, int& b);

void main()
{
	setlocale(LC_ALL, "Russian");
	int a = 2;
	int b = 3;
	cout << a << tab << b << endl;
	Exchange(a, b);
	cout << a << tab << b << endl;
}

void Exchange(int& a, int& b)
{
	int buffer = a;
	a = b;
	b = buffer;
}