#include<iostream>
using namespace std;

//#define POINTERS_BASICS  //������ ����������
#define POINTERS_AND_ARRAYS //��������� � �������
void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef POINTERS_BASICS
	cout << "Hello Pointers" << endl;
	int a = 2;
	int* pa = &a;		//& - �������� ������ ������ (Adress-of-operator)
	cout << a << endl;  //����� ���������� 'a' �� �����
	cout << &a << endl; //������ ������ ���������� 'a' ����� ��� ������
	cout << pa << endl; //����� ������ ���������� 'a', ����������� � ��������� 'pa'
	cout << *pa << endl;//* - �������� ������������� (Dereference operator)
	//'pa' - �������� � �������
	//'*pa' - �������� �� ��������� �� ������

	int* pb;
	int b = 3;
	pb = &b; //�������������� ��������� ����� ��� ����������
	cout << b << endl;
	cout << &b << endl;
	cout << pb << endl;
	cout << *pb << endl;
	//int - 'int'
	//int*- ��������� �� 'int'
	//double - 'double'
	//double*- ��������� �� 'double'
	//char - 'char'
	//char*- ��������� �� 'char'

#endif // POINTERS_BASICS
#ifdef POINTERS_AND_ARRAYS
	const int n = 5;
	int arr[n] = { 3, 5, 8 ,13, 21 };
	cout << arr << endl;
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;

#endif // POINTERS_AND_ARRAYS
}