#include <iostream>
using namespace std;

int main()
{
	char char_value = 'A';
	int int_value = 123;
	double double_value = 123.456;
	
	char* char_pointer_value = &char_value;
	int* int_pointer_value = &int_value;
	double* double_pointer_value = &double_value;

	cout << "char_value : " << char_value << endl;
	cout << "int_value : " << int_value << endl;
	cout << "double_value : " << double_value << endl;
	cout << endl;

	cout << "*char_pointer_value : " << *char_pointer_value << endl;
	cout << "*int_pointer_value : " << *int_pointer_value << endl;
	cout << "*double_pointer_value : " << *double_pointer_value << endl;
	cout << endl;

	*char_pointer_value = 'Z';
	*int_pointer_value = 543;
	*double_pointer_value = 654.321;

	cout << "char_value : " << char_value << endl;
	cout << "int_value : " << int_value << endl;
	cout << "double_value : " << double_value << endl;

	return 0;
}

// A pointer in C++ stores the memory address of a variable, has a fixed size (4 bytes on 32-bit, 8 bytes on 64-bit systems), 
// and allows accessing or modifying the value at that address using dereferencing (*)
//C++���� �����ʹ� ������ �޸� �ּҸ� �����ϸ�, ũ��� ����(32��Ʈ �ý��ۿ��� 4����Ʈ, 64��Ʈ �ý��ۿ��� 8����Ʈ)�̰�, 
// ������(*)�� ���� �ش� �ּ��� ���� �����ϰų� ������ �� �ֽ��ϴ�.