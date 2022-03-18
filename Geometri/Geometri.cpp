#include<iostream>
using namespace std;

#define SQUARE
//#define SQUARE_1
//#define SQUARE_2
//#define TRINGEL_1
//#define TRINGEL_2
//#define TRINGEL_3
//#define TRINGEL_4
//#define TRINGEL_5

void main()
{
	setlocale(LC_ALL, "");
#ifdef SQUARE
	int n;
	cout << "¬ведите число: "; cin >> n;
	for (int i = 0; i < n; i++)// этот for повтор€ет вывд строки из звездочек
	{
		for (int i = 0; i < n; i++)//повтор€ет вывод звездочки, мы получаем строку из звездочек
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE
#ifdef SQUARE_1
	int n;
	cout << "¬ведите число: "; cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << ('*');
		}
		cout << endl;
	}
#endif // SQUARE_1
#ifdef SQUARE_2
	int n;
	cout << "¬ведите число: "; cin >> n;
	for (int i = n; i < 1; i--)
	{
		for (int j = 0; j < i; j++ )
		{
			cout << ('*');
		}
		cout << endl;
	}
#endif // SQUARE_2
#ifdef TRINGEL_1
	int n;
	cout << "¬ведите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRINGEL_1
#ifdef TRINGEL_2
	int n;
	cout << "¬ведите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRINGEL_2
#ifdef TRINGEL_3
	int n;
	cout << "¬ведите число:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "   ";
		for (int j = i; j < n; j++)cout << "*  ";
		cout << endl;
	}
#endif // TRINGEL_3
#ifdef TRINGEL_4
	int n;
	cout << "¬ведите число:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)cout << "   ";
		for (int j = 0; j <= i; j++)cout << "*  ";
		cout << endl;
	}
#endif // TRINGEL_4
	int digit;

	cout << "Enter digit: ";
	cin >> digit;
	cout << "\n";


	for (int i = 0; i < digit; i++)
	{
		for (int j = 0; j < digit; j++)
		{
			if (j == digit / 2 + i || j == digit / 2 - i || j == i - digit / 2 || j == digit - i + digit / 2 - 1)
				cout << " / ";
			else
				cout << " ";
		}
		cout << endl;
	}

}