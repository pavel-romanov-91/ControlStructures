#include<iostream>
using namespace std;


//#define FOR_SYNTAX
//#define FACTORIAL
//#define DEGREE
#define ASCII

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef FOR_SYNTAX
	int n = 10;
	cout << "������� ���������� ��������:"; cin >> n;
	for (
		int i = 0; 
		i < n; 
		i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR_SYNTAX
	
#ifdef FACTORIAL
	int n; //����� ��������� � ����������
	float f = 1; //��������� �����
	cout << "������� �����:"; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif // FACTORIAL

#ifdef DEGREE
	
	int a; // ��������� �������
	int n; // ���������� �������
	double a;
	double N; // �������
	cout << "������� ��������� �������:"; cin >> a; 
	cout << "������� ���������� �������:"; cin >> n;
	cout << a << "^" << n << "=";
	if (n < 0)
	{
		n = -n; //������ ���� ���������� �� ���������������
		a = 1 / a; // ��������� ��������� ������� � �����������
	}
	for (int i = 0; i > 0; i++)
	{
		N *= a;
	}
	cout << N << endl;

#endif // DEGREE

#ifdef ASCII
	double a = 0;
	double b = 1;
	double c = a + b;
	double n;
	
	/*
	cout << "������� ���������� ����� �� ���� ��������:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << a << "\t";
		a = b;
		b = c;
		c = a + b;
	}
	*/
}
#endif // ASCII


}
//1, �������� ���������, ������� �������� ����� � �������.
//��������� � ���������� ������� ������� � ����������
//2, ������� �� ����� ������� ASCII - ��������, �� 16 �������� � ������
//3, ������� �� ����� ��� ��������, �� ����������� �������: 50.


/*
Ctrl + Y -������� ��������� ��������
Ctrl + D -����������� ������
Ctrl + K,C -������������� ������
Ctrl + K,U -���������������� ������
Ctrl + K,S -�����������
ALT + ������� ������������ ������
---------------------------------------------------------------- -
1.  �������������� ��� ��������
2. ������� �� ����� ������� ���������
3. ������� �� ����� ������� ��������
*/ 