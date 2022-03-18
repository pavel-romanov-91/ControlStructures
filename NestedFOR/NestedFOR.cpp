#include<iostream>
using namespace std;
//#define MULTIPLICATION_TABLE


void main()
{
	setlocale(LC_ALL, "");
#ifdef MULTIPLICATION_TABLE
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        cout << "ТАблица умножения на" << endl;
        for (int j = 1; j <= n; j++)
        {
            //cout << i << "*" << j << "=" << i * j << endl;
            if (i < 10)cout << " ";
            cout << i << "*";
            if (j < 10)cout << " ";
            cout << j << "=";
            if (i * j < 100)cout << " ";
            if (i * j < 10)cout << " ";
            cout << i * j << "\t" << endl;
        }
        cout << endl;
    }
#endif // MULTIPLICATION_TABLE

    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout.width(5); // ширина поля, в которое будет выведено следующее значение
           // после задания ширины устанавливается выравнивание по праввому краю.
            cout << i * j;
        }
        cout << endl;
    }

}




// CTRL + D выранивание автомат.