#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void Sort(int arr[], const int n);
int Sum(int arr[], const int n, int sum);
double Avg(int arr[], double sum, const int n,double avg);
int minValueIn(int arr[], const int n, int min);
int maxValueIn(int arr[], const int n, int max);


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
	int sum=0 ,min, max;
	min = max = arr[0];
	double avg = 0;
	cout << "Сумма элементов массива:" << Sum(arr,n,sum) << endl;
	cout << "Среднее арифметическое эллементов массива:" << Avg(arr,sum, n, avg) << endl;
	cout << "Минимальное значение в массиве:" << minValueIn (arr,n,min) << endl;
	cout << "Максимальное значение в массиве:" << maxValueIn(arr, n, max) << endl;

}

void FillRand(int arr[], const int n)
{
	
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
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
int Sum(int arr[], const int n, int sum)
{
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[],double sum, const int n,double avg)
{
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	avg = sum / n;
	return  avg;
}
int minValueIn(int arr[], const int n, int min)
{
	FillRand(arr, n);
	min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) 
		{
			min = arr[i];
		}
	}
	return min;
}
int maxValueIn(int arr[], const int n, int max)
{
	FillRand(arr, n);
	max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}