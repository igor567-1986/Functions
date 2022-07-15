#include<iostream>
using namespace std;

#define tab "\t"
#define razdel "---------------------------------"

const int ROWS = 3;
const int COLS = 4;
void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);

double Avg(int arr[],  const int n);
double Avg(double arr[],  const int n);

int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
void shiftLeft(int arr[], const int n, int shift);
void shiftRight(int arr[], const int n, int shift);




void main()
{
	setlocale(LC_ALL, "");

	const int n = 5;
	int arr[n];
	//srand(time(NULL));
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	int sum=0, min=0, max=0,shift,buffer=0;
	double avg = 0;
	cout << "Сумма элементов массива:" << Sum(arr,n) << endl;
	cout << razdel << endl;;
	cout << "Среднее арифметическое эллементов массива:" << Avg(arr, n) << endl;
	cout << razdel << endl;;
	Print(arr, n);
	cout << "Минимальное значение в массиве:" << minValueIn (arr,n) << endl;
	Print(arr, n);
	cout << razdel<<endl;
	cout << "Максимальное значение в массиве:" << maxValueIn(arr, n) << endl;
	Print(arr, n);
	cout << razdel<<endl;
	cout << "Введите количество сдвигов :"; cin >> shift;
	Print(arr, n);
	shiftLeft(arr, n, shift);
	Print(arr, n);
	cout << razdel << endl;
	cout << "Введите количество сдвигов :"; cin >> shift;
	Print(arr, n);
	shiftRight(arr, n, shift);
	Print(arr, n);
	cout << razdel << endl;

	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(brr, SIZE) << endl;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}

void FillRand(int arr[], const int n)
{
	
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
    }
}
void FillRand(double arr[], const int n)
{
	
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
    }
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

int Sum(int arr[], const int n)
{
	int sum=0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum=0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	return (double) Sum(arr,n)/n;
}
double Avg(double arr[], const int n)
{
	return (double) Sum(arr,n)/n;
}
int minValueIn(int arr[], const int n)
{
	
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) 
		{
			min = arr[i];
		}
	}
	return min;
}
int maxValueIn(int arr[], const int n)
{
	int	max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
void shiftLeft(int arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftRight(int arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[n-1];
		for (int i = n - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}