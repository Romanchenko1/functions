#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<conio.h>
#include<Windows.h>
using namespace std;


void task1()
{
	const int n = 5;
		int k = 2;
		int a[n] = {1, 2, 3, 4, 5};
		int b[n];
		int c = 0;
		for (int i = 0; i < n; i++)
		{
			if (i + k < n)
			{
				b[i + k] = a[i];
			}
			else
				b[c++] = a[i];
		}
			cout << "Final arrays\n";
			for (int i = 0; i < n; i++)
			{
				cout << b[i] << "\n";
			}
}


#define q 5
void task2()
{
//40.***Создайте двухмерный массив
//Заполните его случайными числами и покажите на экран
//Выполните сортировку массива
//Полученный результат покажите на экран.
	int A[q][q];
	int i, j, k, r;
	int s;
	for (i = 0; i < q; i++)
	{
		for (j = 0; j < q; j++)
		{
			A[i][j] = 0 + rand() % 20;
			cout <<A[i][j]<<" ";
			
		}
		cout << "\n";
	}
	cout << "\n====================================\n";
	for (k = 0; k < q; k++)
	{
		for (r = 0; r < q; r++)
		{
			for (i = 0; i < q; i++)			
			{
				for (j = 0; j < q; j++)
				{
					if (A[i][j] > A[k][r])
					{
						s = A[i][j];
						A[i][j] = A[k][r];
						A[k][r] = s;
					}
				}
			}
		}
	}
	for (i = 0; i < q; i++)
	{
		for (j = 0; j < q; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << "\n";
	}
}



int kub(int x) 
{
	return x * x*x;
}
void task3()
{
//1.*Напишите функцию, которая принимает целое число, и возвращает его куб.
	int a = kub(5);
	cout << a << endl; 
}




int summ(int s,int a)
{
	return a + s;
}
void task4()
{
//2.*Напишите функцию, которая принимает два целых числа, и возвращает их сумму.
	int a = 5;
	int	s = 6;
	cout << summ(a, s) << endl;
}




int s(int a, int b)
{
	return(a > b ? a : b);
}
void task5()
{
//4.*Напишите функцию, которая принимает два целых числа, и определяет большее из них.
	int a = 5;
	int b = 10;
	cout << s(a, b) << endl;
}






int bol(int a, int b, int c)
{
	if (a > b && a > c)
		return a;
	if (b > a && b > c)
		return b;
	if (c > b && c > a)
		return c;
}
void task6()
{
//5.*Напишите функцию, которая принимает три целых числа, и определяет большее из них.
	int a = 5;
	int b = 6;
	int c = 13;
	cout << bol(a, b, c) << endl;
}




bool isUpper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return true;
	else
		return false;
}
void task7()
{
	char c;
	cin >> c;
	cout << isUpper(c)<< endl;
}


//Объем цилиндра
float S(float R, float h)
{
	float V = 3.14*R*R*R*h;
	return V;
}
void task8()
{
	float R = 0 + rand() % 5;
	float h = 0 + rand() % 5;
	cout << S(R, h) << endl;
}





char W(int a, int b)
{
	if (a > b)
		return '>';
	if (a < b)
		return '<';
	if (a == b)
		return '=';
}
void task9()
{
	float a = 0 + rand() % 5;
	float b = 0 + rand() % 5;
	cout << W(a, b) << endl;
}





double fact(int n)
{
	return n < 2 ? 1 : n * fact(n - 1);
}
void task10()
{
//Написать функцию "Факториал" и программу, использующую эту функцию для вывода таблицы факториалов
	for (int n = 0; n < 15; n++) 
	{
		cout << '\t' << n << '\t' << fact(n) << '\n';
	}
}


//int dohod(float vklad, float stavka, float srok)
//{
//	float s = vklad*(stavka / 365)*srok;
//}
//void task11()
//{
////Написать функцию Dohod, которая вычисляет доход по вкладу
////Исходными данными для функции являются : величина вклада, процентная ставка(годовых) и срок вклада(количество дней).
//	float vklad = 0 + rand() % 500;
//	float stavka = 0.5 + rand() % 5;
//	float srok = 1 + rand() % 10;
//	cout << dohod(vklad,stavka,srok) << endl;
//}




bool glash(char bukva)
{
	char a[11] = "аеуоиыэюя";
	for (int i = 0; i < 10; i++)
	{
		if (a[i] == bukva)
			return 1;
	}
	return 0;
}
void task11()
{
//Написать функцию glasn, которая возвращает 1, если символ, полученный функцией в качестве аргумента, является гласной буквой русского алфавита, и ноль — в противном случае.
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char bukva;
	cin >> bukva;
	cout << glash(bukva) << endl;
}



void stroka(int l, char ch)
{
	for (int i = 0; i < l; i++)
		cout << ch;
}
void task12()
{
//Написать функцию, которая выводит строку, состоящую из одинаковых символов.Длина строки и символ являются параметрами функции.
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	stroka(5, 'a');
}


int parallepiped(int a, int b, int c)
{
	return a*c + a * b + b * c;
}
int parallepiped1(int a, int b, int c)
{
	return a*b*c;
}
void task13()
{
//Написать функцию, которая вычисляет объем и площадь поверхности параллелепипеда
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a = 0 + rand() % 10;
	int b = 0 + rand() % 10;
	int c = 0 + rand() % 10;
	cout << parallepiped(a, b, c) << endl;
	cout << parallepiped1(a, b, c) << endl;
}


void frame(short x, short y, short cx, short cy)
{
	while (y--)
		cout << endl;
	short n = cy - 1;
	while (cy--) 
	{
		for (short i = 0; i <= x + cx; i++) 
		{
			if ((cy == n && i >= x) || (!cy && i >= x) || i == x || i == x + cx)
				cout.put((char)40);
			else
				cout.put(' ');
		}
		cout << endl;
	}
}
void task14()
{
//Написать функцию frame, которая выводит на экран рамку.В качестве параметров функции должны передаваться координаты левого верхнего угла и размер рамки.
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	frame(15, 2, 28, 18);
}


int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int task;
	int flag;
start:
	printf("Введите номер задания->");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1: {task1(); }break;
	case 2: {task2(); }break;
	case 3: {task3(); }break;
	case 4: {task4(); }break;
	case 5: {task5(); }break;
	case 6: {task6(); }break;
	case 7: {task7(); }break;
	case 8: {task8(); }break;
	case 9: {task9(); }break;
	case 10: {task10(); }break;
	case 11: {task11(); }break;
	case 12: {task12(); }break;
	case 13: {task13(); }break;
	case 14: {task14(); }break;
	default:
		break;
	}
	printf("Чтобы продолжить нажмите 1->");
	scanf_s("%d", &flag);
	if (flag==1)
	{
		goto start;
	}
	system("pause");
}