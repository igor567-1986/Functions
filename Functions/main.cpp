#pragma warning (disable:4326)
#include <iostream>
using namespace std;

//#define FUNCTION_1
//#define FACTORIAL
#define DEGREE

int Add(int a, int b);//�������� �������
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);
int factorial(int n);
double degree(double a, int n,double N);


void main()
{
	setlocale(LC_ALL, "");
	int a, b, f,n,N=1;
#ifdef FUNCTION_1
	cout << "������� ��� �����"; cin >> a >> b;
	int c = Add(a, b);//������������� ������� (����� ������� -function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;

#endif // DEBUG
#ifdef FACTORIAL
	cout << "������� ��������� ������ ����� �� ������ �������:"; cin >> a;
	cout << "��������� �����" << a << "=" << factorial(a, i, b) << endl;
#endif // FACTORIAL
#ifdef DEGREE
	cout << "������� ��������� �������:"; cin >> a;
	cout << "������� ���������� �������:"; cin >> n;
	cout << "������� �����" << " = " << degree(a, n, N) << endl;
#endif // DEGREE

}
int Add(int a, int b)//���������� �������(����������� �������-Function definition)
{
	//Addition - ��������
	int c = a + b;
	return c;
}
int Sub(int a, int b)
{
	//Subtraction - ���������
	return a - b;
}
int Mul(int a, int b)
{
	//Multiplication - ���������
	return a * b;
}
double Div(int a, int b)
{
	//Division - �������
	return (double)a / b;
}
int factorial(int n)
{
	int f = 1;
	for (int i = 1; i < n; i++)
	{
		f *= i;
	}
	return f;
}
double degree(double a,int n,double N)
{
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	return N;
}





