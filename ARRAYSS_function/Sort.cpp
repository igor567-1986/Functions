#include"Sort.h"
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
void Sort(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS * COLS; i++)
	{
		int buffer;
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
