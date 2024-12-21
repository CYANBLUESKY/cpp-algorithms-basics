#include <iostream>
#include <string>

using namespace std;

int main()
{
	int customer_num = 0;

	cout << "坷疵 规巩 颊丛 : ";
	cin >> customer_num; 

	string* bread = new string[customer_num];

	for (int i = 0; i < customer_num; i++)
	{
		bread[i] = "户_" + to_string(i);
	}

	cout << endl << "--积魂等 户--" << endl;

	for (int i = 0; i < customer_num; i++)
	{
		cout << *(bread + i) << endl;
	}

	delete[] bread;

	return 0;
}