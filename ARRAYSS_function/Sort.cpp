#include"stdafx.h"
#include"constans.h"
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
