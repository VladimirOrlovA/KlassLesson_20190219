#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>

using namespace std;

/*
5.	»спользу€ указатели заполнить массив случайными числами и вывести его на экран.

void fillArray(int *a, int n)
{
	for (int i = 0; i < n; i++)
		a[i] = rand() % 11;
}

void printArray(int *a, int n)
{
	for (int *p = a; p < a + n; p++)
	{
		cout << *p << " ";
	}
	cout << endl;
}

int main()
{
	srand(time(NULL));
	int a[5];
	fillArray(a, 5);
	printArray(a, 5);

	system("pause");
}
*/



/*
//6.ƒано натуральное число N и массив целых чисел.»спользу€ указатели, вы€снить имеетс€ ли в массиве хот€ бы одно нечетное отрицательное число и определить его местонахождение в массиве.

void fillArray(int *a, int n)
{
	for (int i = 0; i < n; i++)
		a[i] = -5 + rand() % 11;
}

void printArray(int *a, int n)
{
	for (int *p = a; p < a + n; p++)
	{
		cout << *p << " ";
	}
	cout << endl;
}

void find(int *a, int n)
{
	for (int *p = a; p < a + n; p++)
	{
		if(*p%2!=0 && *p<0) cout<<(p-a)<<endl;
	}
}

int main()
{
	srand(time(NULL));
	int a[5];
	fillArray(a, 5);
	printArray(a, 5);
	find(a, 5);

	system("pause");
}
*/


//7.ƒаны действительные числа а1, ..a16. »спользу€ указатели получить min(a1*a9, a2*a10, ..., a8*a16). 

void fillArray(int *a, int n)
{
	for (int i = 0; i < n; i++)
		a[i] = 1 + rand() % 11;
}

void printArray(int *a, int n)
{
	for (int *p = a; p < a + n; p++)
	{
		cout << *p << " ";
	}
	cout << endl;
}

template<typename T>
T findMin(T *a, int n)
{
	T* p1 = a;
	T* p2 = a + n / 2;
	T mult, min = *p1* *p2;

	for (; p1 < a + n / 2; p1++, p2++)
	{
		mult = *p1* *p2;
		cout << mult << endl;

		if (mult <= min)
			min = mult;
	}
	return min;
}

int main()
{
	srand(time(NULL));
	int a[16];
	fillArray(a, 16);
	printArray(a, 16);
	cout<<endl<<findMin(a, 16)<<endl;

	system("pause");
}


//int main()
//{
//	//int a=100;
//	//
//	//double d;
//	//double *b;
//	//int*p;	// указатель на адрес переменной, размер адреса 4 бита
//	//p = &a; // адрес переменной
//
//	//cout << p << endl;		// вызов адреса переменной
//	//cout << *p << endl;		// вызов значени€ переменной на которую указывает указатель
//
//
//	//1.	ќбъвить две переменные и два указател€.ѕрисвоить указател€м адреса переменных.—ложить переменные, 
//	//	использу€ указатели и присвоить результат третьей переменной.¬ывести результат сложени€ на экран и адрес результата.
//
//
//	/*int a=1;
//	int b=2;
//	int *a1;
//	int *b1;
//
//	int result;
//
//	a1 =&a;
//	b1 =&b;
//
//	result = *a1 + *b1;
//
//	cout << result << endl;*/
//
//
//
//	/*2.	»справить код :
//#include <iostream> 
//	using namespace std;
//	void main()
//	{
//		int a = 2, b = 5;
//		int *p1, *p2 = &b;
//		*p1 = 10;
//		cout << *p1 - *p2;
//	}*/
//
//	/*int a = 2, b = 5;
//	int *p1, *p2;
//	p1 = &a;
//	p2 = &b;
//
//	cout << *p1 - *p2<<endl;*/
//
//
//
//	/*3.	»справить код :
//#include <iostream> 
//	using namespace std;
//	void main()
//	{
//		double a = 2.5, b = 5.2, res;
//		int *p1 = a, p2 = b;
//		res = *p1 - p2;
//		cout << res;
//	}*/
//
//	/*double a = 2.5, b = 5.2, res;
//	double *p1, *p2;
//	p1 = &a;
//	p2 = &b;
//	res = *p1 - *p2;
//	cout << res<<endl;*/
//
//
//
//
//
//	/////////////////ќбъ€снение////////////////
//
//	/*int a[5] = { 10,20,30,40,50 };
//	int *p;
//
//	p = a;
//
//	cout << a << endl;
//	cout << a << endl;
//	cout << &a[0] << endl;
//	cout << &p[0] << endl;
//
//	cout << *a << endl;
//	cout << *a << endl;
//	cout << a[0] << endl;
//	cout << p[0] << endl;
//
//	cout << a+3 << endl;
//	cout << p + 3 << endl;
//	cout << &a[3] << endl;
//	cout << &p[3] << endl;
//
//
//	cout << *(a + 3) << endl;
//	cout << *(p + 3) << endl;
//	cout << a[3] << endl;
//	cout << p[3] << endl;
//*/
//
//	//	4.	»справить код :
////#include <iostream>
////	using namespace std;
////	void main()
////	{
////		const int SIZE = 10;
////		int A[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
////		int *p = A;
////		for (int i = 0; i < SIZE; i++) //выполнить вывод массива использу€ указатели
////			cout << *A++;
////	}
//
//
//	//const int SIZE = 10;
//	//int A[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int *p = A;
//	//for (int i = 0; i < SIZE; i++)	//выполнить вывод массива использу€ указатели
//	//	cout << *p++ << endl;		// ++ распечатка каждого элемента 
//
//
//	
//
//
//
//
//
//	system("pause");
//}