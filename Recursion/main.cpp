#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void elevator(int floor);
int Factorial(int n,int f);
double Power(double a, int n, double N);
void Fib_1(int n,int f,int a ,int N);
void Fib_2(int n, int f, int a, int N);

//#define CLASS_WORK

#ifdef CLASS_WORK

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello world" << endl;
	int floor;
	cout << "Введите номер этажа "; cin >> floor;
	elevator(floor);
}
void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floor << "этаже\n";
	elevator(floor - 1);
	cout << "Вы на " << floor << "этаже\n";
}
#endif // CLASS_WORK

void main()
{
	setlocale(LC_ALL, "");
	int n,f=1,a;
	double N=1;
	cout << "Введите факториал какого числа вы хотите вывести:"; cin >> n;
	Factorial(n, f);
	cout << "Введите основание степени:"; cin >> a;
	cout << "Введите показатель степени:"; cin >> n;
	Power(a, n , N);
	cout << "До какого числа нужно вывести ряд чисел Фибоначчи:"; cin >> n;
	f = 0; a = 1;
	Fib_1(n, f, a, N); cout << endl;
	cout << "Сколько нужно вывести чисел из ряда Фибоначчи:"; cin >> n;
	Fib_2(n , f, a, N);
}
int Factorial(int n,int f)
{
	if (n == 0)
	{
		cout << "Факториал числа" << "="<< f << endl;
		return f ;
	}
	f *= n;
	Factorial(n - 1 ,f);
}
double Power(double a, int n, double N) 
{
	if (n == 0)
	{
		cout << "Степень числа" << "=" << N << endl;
		return N;
	}
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	N *= a;
	Power(a, n - 1, N);
}
void Fib_1(int n,int f,int a,int N)
{
	if (f > n)
	{
		return;
    }
	N = f + a;
	cout << f << "\t";
	a = f;
	f = N;
	Fib_1(n, f, a, N);
}
void Fib_2(int n, int f, int a, int N)
{
	if (n==0)
	{
		return;
	}
	N = f + a;
	cout << f << "\t";
	a = f;
	f = N;
	Fib_2(n-1, f, a, N);
}