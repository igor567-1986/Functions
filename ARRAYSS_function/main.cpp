#pragma warning (disable:4326)
#include<iostream>

using namespace std;

#define tab "\t"
#define razdel "---------------------------------"
#define OneDimensionalArrays

const int ROWS = 3;
const int COLS = 4;
int sum = 0, buffer = 0, shift;

void FillRand(int arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>void Print(T arr[], const int n);
template <typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>void Sort(T arr[], const int n);
template <typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>T Sum(T arr[], const int n);
template <typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>double Avg(T arr[], const int n);
template <typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>T minValueIn(T arr[], const int n);
template <typename T>T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>T maxValueIn(T arr[], const int n);
template <typename T>T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>void shiftLeft(T arr[], const int n, int shift);
template <typename T>void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift);

template <typename T>void shiftRight(T arr[], const int n, int shift);

void main()
{
	setlocale(LC_ALL, "");

#ifdef OneDimensionalArrays
	const int n = 5;
	int arr[n];
	//srand(time(NULL));
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);

	double avg = 0;
	cout << "Сумма элементов массива:" << Sum(arr, n) << endl;
	cout << "Среднее арифметическое эллементов массива:" << Avg(arr, n) << endl;
	Print(arr, n);
	cout << "Минимальное значение в массиве:" << minValueIn(arr, n) << endl;
	Print(arr, n);
	cout << "Максимальное значение в массиве:" << maxValueIn(arr, n) << endl;
	Print(arr, n);
	cout << "Введите на сколько хотите сдвинуть массив влево:"; cin >> shift;
	shiftLeft(arr, n, shift);
	Print(arr, n);
	cout << endl;
	cout << "Введите на сколько хотите сдвинуть массив вправо:"; cin >> shift;
	shiftRight(arr, n, shift);
	Print(arr, n);
	cout << endl;
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
	cout << "Минимальное значение в массиве:" << minValueIn(brr, SIZE) << endl;
	Print(brr, SIZE);
	cout << "Максимальное значение в массиве:" << maxValueIn(brr, SIZE) << endl;
	Print(brr, SIZE);
	cout << "Введите на сколько хотите сдвинуть массив влево:"; cin >> shift;
	shiftLeft(brr, SIZE, shift);
	Print(brr, SIZE);
	cout << endl;
	cout << "Введите на сколько хотите сдвинуть массив вправо:"; cin >> shift;
	shiftRight(brr, SIZE, shift);
	Print(brr, SIZE);
	cout << endl;
	cout << razdel << endl;

	const int m = 8;
	float crr[m];
	FillRand(crr, m);
	FillRand(crr, m);
	Print(crr, m);
	Sort(crr, m);
	Print(crr, m);
	cout << "Сумма элементов массива: " << Sum(crr, m) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(crr, m) << endl;
	cout << "Минимальное значение в массиве:" << minValueIn(crr, m) << endl;
	Print(crr, m);
	cout << "Максимальное значение в массиве:" << maxValueIn(crr, m) << endl;
	Print(crr, m);
	cout << "Введите на сколько хотите сдвинуть массив влево:"; cin >> shift;
	shiftLeft(crr, m, shift);
	Print(crr, m);
	cout << endl;
	cout << "Введите на сколько хотите сдвинуть массив вправо:"; cin >> shift;
	shiftRight(crr, m, shift);
	Print(crr, m);
	cout << endl;
	cout << razdel << endl;

	const int l = 8;
	char drr[l];
	FillRand(drr, l);
	FillRand(drr, l);
	Print(drr, l);
	Sort(drr, l);
	Print(drr, l);
	cout << "Сумма элементов массива: " << Sum(drr, l) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(drr, l) << endl;
	cout << "Минимальное значение в массиве:" << minValueIn(drr, l) << endl;
	Print(drr, l);
	cout << "Максимальное значение в массиве:" << maxValueIn(drr, l) << endl;
	Print(drr, l);
	cout << "Введите на сколько хотите сдвинуть массив влево:"; cin >> shift;
	shiftLeft(drr, l, shift);
	Print(drr, l);
	cout << endl;
	cout << "Введите на сколько хотите сдвинуть массив вправо:"; cin >> shift;
	shiftRight(drr, l, shift);
	Print(drr, l);
	cout << endl;
	cout << razdel << endl;
#endif // OneDimensionalArrays

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << razdel << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива:" << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое эллементов массива:" << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве:" << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве:" << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Введите на сколько хотите сдвинуть массив влево:"; cin >> shift;
	shiftLeft(i_arr_2, ROWS, COLS, shift);
	Print(i_arr_2, ROWS, COLS);
	cout << razdel << endl;

}
void FillRand(int arr[], const int n)
{
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(float arr[], const int n)
{
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(double arr[], const int n)
{
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n)
{
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}
}

template <typename T> void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
template <typename T> void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}

template <typename T>void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template <typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS * COLS; i++)
	{
		T buffer;
		for (int j = 0; j < ROWS; j++)
		{
			for (int l = 0; l < COLS - 1; l++)
			{
				if (arr[j][l + 1] < arr[j][l])
				{
					buffer = arr[j][l];
					arr[j][l] = arr[j][l + 1];
					arr[j][l + 1] = buffer;
				}
			}
		}
		for (int k = 0; k < COLS; k++)
		{
			for (int m = 0; m < ROWS - 1; m++)
			{
				if (arr[m][k + 1] < arr[m][k])
				{
					buffer = arr[m][k];
					arr[m][k] = arr[m][k + 1];
					arr[m][k + 1] = buffer;
				}
			}
		}
	}
}

template <typename T>T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template <typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

template <typename T>double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template <typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

template <typename T>T minValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
template <typename T>T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	return min;

}

template <typename T>T maxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
template <typename T>T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	return max;

}

template <typename T>void shiftLeft(T arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		T buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
template <typename T>void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
{
	for (int k = 0; k < shift; k++)
	{
		int buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				//if (i == 0 && j == 0) buffer = arr[0][0];
				arr[i][j] = arr[i][j + 1];
				//if (j == COLS - 1 && i != ROWS - 1)arr[i][j] = arr[i + 1][(j + 1) - COLS];
				//else if (i == ROWS - 1 && j == COLS - 1)arr[ROWS - 1][COLS - 1] = buffer;
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}

template <typename T>void shiftRight(T arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		T buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
