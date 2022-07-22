#pragma once
#include "stdafx.h"
#include"constans.h"
int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
float Sum(float arr[], const int n);
char Sum(char arr[], const int n);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
float Avg(float arr[], const int n);
char Avg(char arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);


int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
float minValueIn(float arr[], const int n);
char minValueIn(char arr[], const int n);
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);


int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
float maxValueIn(float arr[], const int n);
char maxValueIn(char arr[], const int n);
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
