// calc.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;
int main()
{
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");

	int c;
	cout << "Введите операцию:\n1.Сложение\n2.Вычитание\n3.Умножение\n4.Деление\n5.Возведение в степень\n6.Нахождения квадратного корня\n7.Нахождение 1 процента от числа\n8.Найти факториал числа\n9.Выйти из программы."<< endl;
	cin >> c;
	double a = 0;
	double b = 0;
	do
	{

		switch (c) {
			case 1:
			{
				cout << "Введите первое число: ";
				cin >> a;
				cout << "Введите второе число: ";
				cin >> b;
				double sum = a + b;
				cout << "Сумма чисел = " << sum << endl;
				cout << "Введите операцию: ";
				cin >> c;
				break;
			}
			case 2:
			{
				cout << "Введите первое число: ";
				cin >> a;
				cout << "Введите второе число: ";
				cin >> b;
				double minus = a - b;
				cout << "Разность чисел = " << minus << endl;
				cout << "Введите операцию: ";
				cin >> c;
				break;
			}
			case 3:
			{
				cout << "Введите первое число: ";
				cin >> a;
				cout << "Введите второе число: ";
				cin >> b;
				double umnoj = a * b;
				cout << "Произведение чисел = " << umnoj << endl;
				cout << "Введите операцию: ";
				cin >> c;
				break;
			}
			case 4:
			{
				cout << "Введите первое число: ";
				cin >> a;
				cout << "Введите второе число: ";
				cin >> b;
				if (b != 0)
				{
					double del = a / b;
					cout << "Частное чисел = " << del << endl;
					cout << "Введите операцию: ";
					cin >> c;
				}
				else
				{
					cout << "На ноль делить нельзя!\nВведите операцию: " << endl;
					cin >> c;

				}
				break;
			}
			case 5:
			{
				cout << "Введите число: ";
				cin >> a;
				cout << "Введите степень: ";
				cin >> b;
				double stepen = pow(a, b);
				cout << "Число a в степени b = " << stepen << endl;
				cout << "Введите операцию: ";
				cin >> c;
				break;
			}
			case 6:
			{
				cout << "Введите число: ";
				cin >> a;
				if (a >= 0)
				{
					double coren = sqrt(a);
					cout << "Корень числа a = " << coren << endl;
					cout << "Введите операцию: ";
					cin >> c;

				}
				else
				{
					cout << "Нет корня отрицательного числа! Введите операцию: " << endl;
					cin >> c;
				}
				break;
			}
			case 7:
			{
				cout << "Введите число: ";
				cin >> a;
				double procent = a * 0.01;
				cout << "Один процент от a = " << procent << endl;
				cout << "Введите операцию: ";
				cin >> c;
				break;
			}
			case 8:
			{
				b = 1;
				cout << "Введите первое число: "<< endl;
				cin >> a;
				if (a < 0)
				{
					cout << "Не существует факториала отрцательного числа! Введите операцию: ";
					cin >> c;
				}

				else if (a == 0)
				{
					cout << "Факториал числа: " << 1 << "\nВведите операцию: ";
					cin >> c;
				}

				else
				{
					for (int i = 1; i <= a; i++)
					{
						b *= i;

					}
					cout << "Результат: " << b << "\nВведите операцию: ";
					cin >> c;
				}
				break;
			}
			case 9:
				exit(0);
				break;
			default:
			{
				cout << "Введите операцию: ";
				cin >> c;
			}

		}		
	} while (c != 9);
	return 0;
}
