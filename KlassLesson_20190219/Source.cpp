#include<iostream>
#include<locale.h>
#include<time.h>
#include<locale.h>
#include<Windows.h>

using namespace std;

/*
5.	��������� ��������� ��������� ������ ���������� ������� � ������� ��� �� �����.

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
//6.���� ����������� ����� N � ������ ����� �����.��������� ���������, �������� ������� �� � ������� ���� �� ���� �������� ������������� ����� � ���������� ��� ��������������� � �������.

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
//7.���� �������������� ����� �1, ..a16. ��������� ��������� �������� min(a1*a9, a2*a10, ..., a8*a16). 

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


/*//8.���� ������������������ a1, a2, ..., a20.��������� ��������� ����������� ������������� �������� ������������������, ������� �� �������� ������ �� �����������.

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
//	//int*p;	// ��������� �� ����� ����������, ������ ������ 4 ����
//	//p = &a; // ����� ����������
//
//	//cout << p << endl;		// ����� ������ ����������
//	//cout << *p << endl;		// ����� �������� ���������� �� ������� ��������� ���������
//
//
//	//1.	������� ��� ���������� � ��� ���������.��������� ���������� ������ ����������.������� ����������, 
//	//	��������� ��������� � ��������� ��������� ������� ����������.������� ��������� �������� �� ����� � ����� ����������.
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
//	/*2.	��������� ��� :
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
//	/*3.	��������� ��� :
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
//	/////////////////����������////////////////
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
//	//	4.	��������� ��� :
////#include <iostream>
////	using namespace std;
////	void main()
////	{
////		const int SIZE = 10;
////		int A[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
////		int *p = A;
////		for (int i = 0; i < SIZE; i++) //��������� ����� ������� ��������� ���������
////			cout << *A++;
////	}
//
//
//	//const int SIZE = 10;
//	//int A[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int *p = A;
//	//for (int i = 0; i < SIZE; i++)	//��������� ����� ������� ��������� ���������
//	//	cout << *p++ << endl;		// ++ ���������� ������� �������� 
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



///// _____________ 2019 02 20 _____________ �_pract_pointers_dp


//1.	*��� ������ �����, ���������� ������ � ���� � ������� �� ���� ����� � ������� ����������.

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

//2.	*������� ������ �� 10 ����� �����.��������� ������ ��������� ������� � ��������� �� - 25 �� 35. 
//��������� ���������� �� ������ ����� �����, ��������� ����� ��������� �������.
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

	cout << "����� ��������� ������� = " << sum<<endl;

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


//3.	*������� ������ �� 10 ����� �����.��������� ������ ��������� ������� � ��������� �� - 44 �� 76. 
// ��������� ���������� �� ������ ����� �����, ��������� ������������ ��������� �������.
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

//4.	*������� ������ �� 10 ����� �����.��������� ������ ��������� ������� � ��������� �� - 15 �� 105. 
//��������� ���������� �� ������ ����� �����, ��������� ������� �������������� ��������� �������.

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

//5.	**������� ������ �� 10 ����� �����.��������� ������ ��������� ������� � ��������� �� - 45 �� 45. 
//��������� ����������(�) �� ������ ����� �����, ��������� ������� ������������� � ������������� ��������� �������.
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

//6.	*������� ������ �� 10 ����� �����. ��������� ������ ��������� �������. 
//��������� ���������� �� ������ ����� �����, ��������� ����� ��������� ������� � ������� ��������.
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

// 7.	*������� ������ �� 10 ����� �����. ��������� ������ ��������� �������. 
//��������� ���������� �� ������ ����� �����, ��������� ����� ��������� ������� � ��������� ��������.
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

//8.	*������� ������ �� 10 ����� �����. ��������� ������ ��������� �������. 
//��������� ���������� �� ������ ����� �����, ��������� ����� ��������� ������� � �������� �������� ����.

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

//9.	*������� ������ �� 10 ����� �����. ��������� ������ ��������� �������. ��������� ���������� �� ������ ����� �����, ��������� ����� ��������� ������� � �������� �������� 7.
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

// 10.	*������� ������ �� 20 ����� �����. ��������� ������ ��������� ������� � ��������� �� 1 �� 12. ������ ����� ��� ������ �� 12 ������� �������. 
//��������� ���������� �� ������ ����� �����, ��������� ������� �����, �����, �������� � �������.
//������ �� 1 �� 3 ������������, ������ �� 4 �� 6, �������� �� 7 �� 9, ������� �� 10 �� 12.

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


//11.	**������� ������ �� N ����� �����, N  ������ ������������.��������� ������ ��������� ������� � ��������� �� 1 �� 12. 
//������ ����� ��� ������ �� 12 ������� �������.��������� ���������� �� ������ ����� �����, ��������� ������� �����,

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

//36.	***�������� ���������, ������� �������� �������, ����������� � �������� ���������, ��������� �� ��� �������(� � �) � ������� ��������.������� ���������, 
//�������� �� ������ � ������������� ������� � � ���������� ��������� �� ������ ���������� ���������, ���� �������� ���, ���������� 0.

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