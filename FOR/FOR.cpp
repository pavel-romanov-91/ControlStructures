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
	cout << "Введите количество операций:"; cin >> n;
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
	int n; //число введенное с клавиатуры
	float f = 1; //фактариал числа
	cout << "Введите число:"; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif // FACTORIAL

#ifdef DEGREE
	
	int a; // основание степени
	int n; // покозатель степени
	double a;
	double N; // Степень
	cout << "Введите основание степени:"; cin >> a; 
	cout << "Введите показатель степени:"; cin >> n;
	cout << a << "^" << n << "=";
	if (n < 0)
	{
		n = -n; //меняем знак показателя на противоположный
		a = 1 / a; // переносим основание степени в знаменатель
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
	cout << "Введите количества чисел из ряда Фибоначи:"; cin >> n;
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
//1, Написать программу, каторая возводит число в степень.
//Основание и показатель степени водятся с клавиатуры
//2, Вывести на экран таблицы ASCII - символов, по 16 символов в строке
//3, Вывести на экран ряд фибоначи, до указаннного предела: 50.


/*
Ctrl + Y -вернуть отмененое действие
Ctrl + D -Дублировать страку
Ctrl + K,C -каментировать страку
Ctrl + K,U -раскаментировать страку
Ctrl + K,S -задефайлинг
ALT + стрелки передвижение строки
---------------------------------------------------------------- -
1.  Оптимезировать код Фибоначи
2. Вывести на экран таблицу умножения
3. Вывести на экран таблицу Пифагора
*/ 