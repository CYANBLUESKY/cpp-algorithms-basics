#include <iostream>
using namespace std;

int value = 5; //global variable ���� ����

int main()
{
	int value = 55; //local variable ��������

	cout << value << endl; // print local variable ���� ���� ���
	cout << ::value << endl; // print global variable ���� ���� ���

	return 0;
}

// study about global variable vs local variable
// �������� vs ���� ���� ����