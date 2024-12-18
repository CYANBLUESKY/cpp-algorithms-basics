#include <iostream>
using namespace std;

int main()
{
	cout << "Print ASCII code [32 ~ 126]:\n";
	for (char i = 32; i <= 126; i++)
	{
		cout << i << ((i % 16 == 15) ? '\n' : ' ');
	}
}