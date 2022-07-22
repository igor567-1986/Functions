#include"Shifts.h"
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
void shiftLeft(double arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(float arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		float buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(char arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		char buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
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


void shiftRight(int arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void shiftRight(double arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		double buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void shiftRight(float arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		float buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void shiftRight(char arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		char buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}