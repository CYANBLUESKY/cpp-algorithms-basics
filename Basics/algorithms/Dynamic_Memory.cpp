#include <iostream>
using namespace std;

int main()
{
	int* pt_int_value = new int; // Dynamic allocation ���� �޸� �Ҵ�

	*pt_int_value = 100;
	cout << *pt_int_value << endl;

	delete pt_int_value; // Deallocate the memory ���� �޸� ����

	return 0;
}