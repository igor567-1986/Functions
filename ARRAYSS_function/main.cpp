
#include "Fillrand.h"
#include "Print.h"
#include "Print.cpp"
#include"Sort.h"
#include"Sort.cpp"
#include"Statistics.h"
#include"Statistics.cpp"
#include"Shifts.h"
#include"Shifts.cpp"
int sum = 0, buffer = 0, shift;




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
