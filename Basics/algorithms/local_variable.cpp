#include <iostream>

using namespace std;

void print()
{
	int value = 10;

	cout << "print �Լ� ���ο����� ���� ���� value : " << value << endl;
	cout << "print function local value : " << value << endl;
}

int main()
{
	int value = 5;

	cout << "main �Լ� ���ο����� ���� ���� value : " << value << endl;
	cout << "main function local value : " << value << endl;

	print();

	cout << "�ٽ� main �Լ� ���ο����� ���� ���� value : " << value << endl;
	cout << "again main fuction local value : " << value << endl;

	return 0;
}

// study about local variable
// ���� ���� �����Դϴ�