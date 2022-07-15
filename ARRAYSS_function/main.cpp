#include<iostream>
using namespace std;

#define tab "\t"
#define razdel "---------------------------------"

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void Sort(int arr[], const int n);
int Sum(int arr[], const int n, int sum);
double Avg(int arr[], double sum, const int n,double avg);
int minValueIn(int arr[], const int n, int min);
int maxValueIn(int arr[], const int n, int max);
void shiftLeft(int arr[], const int n, int shift, int buffer);
void shiftRight(int arr[], const int n, int shift, int buffer);




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
	int sum=0 ,min, max,shift,buffer=0;
	min = max = arr[0];
	double avg = 0;
	cout << "����� ��������� �������:" << Sum(arr,n,sum) << endl;
	cout << razdel << endl;;
	cout << "������� �������������� ���������� �������:" << Avg(arr,sum, n, avg) << endl;
	cout << razdel << endl;;
	Print(arr, n);
	cout << "����������� �������� � �������:" << minValueIn (arr,n,min) << endl;
	Print(arr, n);
	cout << razdel<<endl;
	cout << "������������ �������� � �������:" << maxValueIn(arr, n, max) << endl;
	Print(arr, n);
	cout << razdel<<endl;
	cout << "������� ���������� ������� :"; cin >> shift;
	Print(arr, n);
	shiftLeft(arr, n, shift, buffer);
	Print(arr, n);
	cout << razdel << endl;
	cout << "������� ���������� ������� :"; cin >> shift;
	Print(arr, n);
	shiftRight(arr, n, shift, buffer);
	Print(arr, n);
}

void FillRand(int arr[], const int n)
{
	
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
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
int Sum(int arr[], const int n)
{
	int sum;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[],double sum, const int n)
{
	double avg;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	avg = sum / n;
	return  avg;
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