#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
void elevator(int floor);

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello world" << endl;
	int floor;
	cout << "������� ����� ����� "; cin >> floor;
	elevator(floor);
}
void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "�� � �������" << endl;
		return;
	}
	cout << "�� �� " << floor << "�����\n";
	elevator(floor-1);
	cout << "�� �� " << floor << "�����\n";
}