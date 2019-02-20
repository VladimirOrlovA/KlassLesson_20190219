#include<iostream>
#include<locale.h>
#include<time.h>
#include<locale.h>
#include<Windows.h>

using namespace std;

/*
5.	Используя указатели заполнить массив случайными числами и вывести его на экран.

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
//6.Дано натуральное число N и массив целых чисел.Используя указатели, выяснить имеется ли в массиве хотя бы одно нечетное отрицательное число и определить его местонахождение в массиве.

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

/*
//7.Даны действительные числа а1, ..a16. Используя указатели получить min(a1*a9, a2*a10, ..., a8*a16). 

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
*/


/*//8.Дана последовательность a1, a2, ..., a20.Используя указатели расположить положительные элементы последовательности, стоящие на нечетных местах по возрастанию.

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
T sort(T *a, int n)
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
	cout << endl << findMin(a, 16) << endl;

	system("pause");
}*/


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
//	//cout << *p << endl;		// вызов значения переменной на которую указывает указатель
//
//
//	//1.	Объвить две переменные и два указателя.Присвоить указателям адреса переменных.Сложить переменные, 
//	//	используя указатели и присвоить результат третьей переменной.Вывести результат сложения на экран и адрес результата.
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
//	/*2.	Исправить код :
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
//	/*3.	Исправить код :
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
//	/////////////////Объяснение////////////////
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
//	//	4.	Исправить код :
////#include <iostream>
////	using namespace std;
////	void main()
////	{
////		const int SIZE = 10;
////		int A[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
////		int *p = A;
////		for (int i = 0; i < SIZE; i++) //выполнить вывод массива используя указатели
////			cout << *A++;
////	}
//
//
//	//const int SIZE = 10;
//	//int A[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int *p = A;
//	//for (int i = 0; i < SIZE; i++)	//выполнить вывод массива используя указатели
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



///// _____________ 2019 02 20 _____________ С_pract_pointers_dp


//1.	*Дан массив чисел, необходимо ввести в него и вывести из него числа с помощью указателей.

/*
void fillArray(int *a, int n)
{
	for (int *p = a; p != a + n; p++)
		*p = 1 + rand() % 11;
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
	int a[10];
	
	fillArray(a, 10);
	printArray(a, 10);
	
	system("pause");
}
*/

//2.	*Создать массив из 10 целых чисел.Заполнить массив случайным образом в диапазоне от - 25 до 35. 
//Пользуясь указателем на массив целых чисел, посчитать сумму элементов массива.
/*
void fillArray(int *a, int n)
{
	for (int *p = a; p != a + n; p++)
		*p = -25 + rand() % 35;
}

void printArray(int *a, int n)
{
	for (int *p = a; p < a + n; p++)
	{
		cout << *p << " ";
	}
	cout << endl;
}

void sumArray(int *a, int n)
{
	int sum = 0;

	for (int *p = a; p != a + n; p++)
		sum += *p;

	cout << "Сумма элементов массива = " << sum<<endl;

}

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a[10];

	fillArray(a, 10);
	printArray(a, 10);
	sumArray(a, 10);
	
	

	system("pause");
}
*/


//3.	*Создать массив из 10 целых чисел.Заполнить массив случайным образом в диапазоне от - 44 до 76. 
// Пользуясь указателем на массив целых чисел, посчитать произведение элементов массива.
/*
void fillArray(int *a, int n)
{
	srand(time(NULL));

	for (int *p = a; p != a + n; p++)
		//*p = -44 + rand() % 76;
		*p = 1 + rand() % 10;
}

void printArray(int *a, int n)
{
	for (int *p = a; p != a + n; p++)
		cout << *p << "\t";
	cout << endl;
}

void prodArray(int *a, int n)
{
	int prod = 1;
	for (int *p = a; p != a + n; p++)
		prod *= *p;

		cout << prod << endl;
}

int main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int a[n] = { 0 };

	fillArray(a, n);
	printArray(a, n);
	prodArray(a, n);
	
	
	system("pause");
}
*/

//4.	*Создать массив из 10 целых чисел.Заполнить массив случайным образом в диапазоне от - 15 до 105. 
//Пользуясь указателем на массив целых чисел, посчитать среднее арифметическое элементов массива.

/*
void fillArray(int *a, int n)
{
	srand(time(NULL));

	for (int *p = a; p != a + n; p++)
		//*p = -44 + rand() % 76;
		*p = 1 + rand() % 10;
}

void printArray(int *a, int n)
{
	for (int *p = a; p != a + n; p++)
		cout << *p << "\t";
	cout << endl;
}

void arifArray(int *a, int n)
{
	
	int sum = 1, *p=a;
	for (; p != a + n; p++)
		sum += *p;
	
	cout <<double(sum) / (p-a) << endl;
}

int main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int a[n] = { 0 };

	fillArray(a, n);
	printArray(a, n);
	arifArray(a, n);


	system("pause");
}
*/

//5.	**Создать массив из 10 целых чисел.Заполнить массив случайным образом в диапазоне от - 45 до 45. 
//Пользуясь указателем(и) на массив целых чисел, посчитать процент положительных и отрицательных элементов массива.
/*
void fillArray(int *a, int n)
{
	srand(time(NULL));

	for (int *p = a; p != a + n; p++)
		//*p = -44 + rand() % 76;
		*p = -2 + rand() % 5;
}

void printArray(int *a, int n)
{
	for (int *p = a; p != a + n; p++)
		cout << *p << "\t";
	cout << endl;
}

void procArray(int *a, int n)
{

	int sumP = 0, sumN = 0,  *p = a;

	for (; p != a + n; p++)
	{
		if (*p > 0) sumP++;
		if (*p < 0) sumN++;
	}
	cout << double(sumP) / (p - a)*100 <<"%"<< endl;
	cout << double(sumN) / (p - a)*100 <<"%"<< endl;
}

int main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int a[n] = { 0 };

	fillArray(a, n);
	printArray(a, n);
	procArray(a, n);


	system("pause");
}
*/

//6.	*Создать массив из 10 целых чисел. Заполнить массив случайным образом. 
//Пользуясь указателем на массив целых чисел, посчитать сумму элементов массива с четными номерами.
/*
void fillArray(int *a, int n)
{
	srand(time(NULL));

	for (int *p = a; p != a + n; p++)
		*p = -5 + rand() % 9;
		
}

void printArray(int *a, int n)
{
	for (int *p = a; p != a + n; p++)
		cout << *p << "\t";
	cout << endl;
}

void sumEvenArray(int *a, int n)
{

	int sumEven = 0, *p = a;

	for (; p != a + n; p++)
	{
		if ((p-a) % 2== 0) sumEven+=*p;
		
	}
	cout << sumEven << endl;
	
}

int main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int a[n] = { 0 };

	fillArray(a, n);
	printArray(a, n);
	sumEvenArray(a, n);


	system("pause");
}
*/

// 7.	*Создать массив из 10 целых чисел. Заполнить массив случайным образом. 
//Пользуясь указателем на массив целых чисел, посчитать сумму элементов массива с нечетными номерами.
/*
void fillArray(int *a, int n)
{
	srand(time(NULL));

	for (int *p = a; p != a + n; p++)
		*p = -5 + rand() % 9;

}

void printArray(int *a, int n)
{
	for (int *p = a; p != a + n; p++)
		cout << *p << "\t";
	cout << endl;
}

void sumEvenArray(int *a, int n)
{

	int sumEven = 0, *p = a;

	for (; p != a + n; p++)
	{
		if ((p - a) % 2 != 0) sumEven += *p;

	}
	cout << sumEven << endl;

}

int main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int a[n] = { 0 };

	fillArray(a, n);
	printArray(a, n);
	sumEvenArray(a, n);


	system("pause");
}
*/

//8.	*Создать массив из 10 целых чисел. Заполнить массив случайным образом. 
//Пользуясь указателем на массив целых чисел, посчитать сумму элементов массива с номерами кратными трем.

/*
void fillArray(int *a, int n)
{
	srand(time(NULL));

	for (int *p = a; p != a + n; p++)
		*p = -5 + rand() % 9;

}

void printArray(int *a, int n)
{
	for (int *p = a; p != a + n; p++)
		cout << *p << "\t";
	cout << endl;
}

void sumEvenArray(int *a, int n)
{

	int sumEven = 0, *p = a;

	for (; p != a + n; p++)
	{
		if ((p - a) % 3 != 0) sumEven += *p;

	}
	cout << sumEven << endl;

}

int main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int a[n] = { 0 };

	fillArray(a, n);
	printArray(a, n);
	sumEvenArray(a, n);


	system("pause");
}
*/

//9.	*Создать массив из 10 целых чисел. Заполнить массив случайным образом. Пользуясь указателем на массив целых чисел, посчитать сумму элементов массива с номерами кратными 7.
/*
void fillArray(int *a, int n)
{
	srand(time(NULL));

	for (int *p = a; p != a + n; p++)
		*p = -5 + rand() % 9;

}

void printArray(int *a, int n)
{
	for (int *p = a; p != a + n; p++)
		cout << *p << "\t";
	cout << endl;
}

void sumEvenArray(int *a, int n)
{

	int sumEven = 0, *p = a;

	for (; p != a + n; p++)
	{
		if ((p - a) % 7 != 0) sumEven += *p;

	}
	cout << sumEven << endl;

}

int main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int a[n] = { 0 };

	fillArray(a, n);
	printArray(a, n);
	sumEvenArray(a, n);


	system("pause");
}
*/

// 10.	*Создать массив из 20 целых чисел. Заполнить массив случайным образом в диапазоне от 1 до 12. Каждое число это оценка по 12 бальной системе. 
//Пользуясь указателем на массив целых чисел, посчитать процент двоек, троек, четверок и пятерок.
//Двойка от 1 до 3 включительно, тройка от 4 до 6, четверка от 7 до 9, пятерка от 10 до 12.

/*
void fillArray(int *a, int n)
{
	srand(time(NULL));

	for (int *p = a; p != a + n; p++)
		*p = 1 + rand() % 12;

}

void printArray(int *a, int n)
{
	for (int *p = a; p != a + n; p++)
		cout << *p << "\t";
	cout << endl;
}

void sumEvenArray(int *a, int n)
{

	int sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0, *p = a;

	for (; p != a + n; p++)
	{
		if (*p >= 1 && *p <= 3) sum2++;
		if (*p >= 4 && *p <= 6) sum3++;
		if (*p >= 7 && *p <= 9) sum4++;
		if (*p >= 10 && *p <= 12) sum5++;
		

	}
	cout << double(sum2) / n * 100 << "%" << endl;
	cout << double(sum3) / n * 100 << "%" << endl;
	cout << double(sum4) / n * 100 << "%" << endl;
	cout << double(sum5) / n * 100 << "%" << endl;

}

int main()
{
	setlocale(LC_ALL, "");

	const int n = 20;
	int a[n] = { 0 };

	fillArray(a, n);
	printArray(a, n);
	sumEvenArray(a, n);


	system("pause");
}
*/


//11.	**Создать массив из N целых чисел, N  вводит пользователь.Заполнить массив случайным образом в диапазоне от 1 до 12. 
//Каждое число это оценка по 12 бальной системе.Пользуясь указателем на массив целых чисел, посчитать процент двоек,

/*
void fillArray(int *a, int n)
{
	srand(time(NULL));

	for (int *p = a; p != a + n; p++)
		*p = 1 + rand() % 12;

}

void printArray(int *a, int n)
{
	for (int *p = a; p != a + n; p++)
		cout << *p << "\t";
	cout << endl;
}

void sumEvenArray(int *a, int n)
{

	int sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0, *p = a;

	for (; p != a + n; p++)
	{
		if (*p >= 1 && *p <= 3) sum2++;
		if (*p >= 4 && *p <= 6) sum3++;
		if (*p >= 7 && *p <= 9) sum4++;
		if (*p >= 10 && *p <= 12) sum5++;


	}
	cout << double(sum2) / n * 100 << "%" << endl;
	cout << double(sum3) / n * 100 << "%" << endl;
	cout << double(sum4) / n * 100 << "%" << endl;
	cout << double(sum5) / n * 100 << "%" << endl;

}

int main()
{
	setlocale(LC_ALL, "");

	const int n = 20;
	int a[n] = { 0 };

	
	fillArray(a, n);
	printArray(a, n);
	sumEvenArray(a, n);


	system("pause");
}
*/

//36.	***Написать программу, которая содержит функцию, принимающую в качестве аргумента, указатели на два массива(А и В) и размеры массивов.Функция проверяет, 
//является ли массив В подмножеством массива А и возвращает указатель на начало найденного фрагмента, если элемента нет, возвращает 0.

void fillArray(int *a, int n)
{
	srand(time(NULL));

	for (int *p = a; p != a + n; p++)
		*p = 1 + rand() % 12;

}

void printArray(int *a, int n)
{
	for (int *p = a; p != a + n; p++)
		cout << *p << "\t";
	cout << endl;
}

void sumEvenArray(int *a, int n)
{

	int sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0, *p = a;

	for (; p != a + n; p++)
	{
		if (*p >= 1 && *p <= 3) sum2++;
		if (*p >= 4 && *p <= 6) sum3++;
		if (*p >= 7 && *p <= 9) sum4++;
		if (*p >= 10 && *p <= 12) sum5++;


	}
	cout << double(sum2) / n * 100 << "%" << endl;
	cout << double(sum3) / n * 100 << "%" << endl;
	cout << double(sum4) / n * 100 << "%" << endl;
	cout << double(sum5) / n * 100 << "%" << endl;

}

int main()
{
	setlocale(LC_ALL, "");

	const int n = 20;
	int a[n] = { 0 };


	fillArray(a, n);
	printArray(a, n);
	sumEvenArray(a, n);


	system("pause");
}