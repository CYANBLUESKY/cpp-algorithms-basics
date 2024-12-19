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
//C++에서 포인터는 변수의 메모리 주소를 저장하며, 크기는 고정(32비트 시스템에서 4바이트, 64비트 시스템에서 8바이트)이고, 
// 역참조(*)를 통해 해당 주소의 값을 접근하거나 수정할 수 있습니다.