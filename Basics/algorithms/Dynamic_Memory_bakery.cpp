#include <iostream>
#include <string>

using namespace std;

int main()
{
	int customer_num = 0;

	cout << "���� �湮 �մ� : ";
	cin >> customer_num; 

	string* bread = new string[customer_num];

	for (int i = 0; i < customer_num; i++)
	{
		bread[i] = "��_" + to_string(i);
	}

	cout << endl << "--����� ��--" << endl;

	for (int i = 0; i < customer_num; i++)
	{
		cout << *(bread + i) << endl;
	}

	delete[] bread;

	return 0;
}