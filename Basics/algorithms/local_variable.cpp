#include <iostream>

using namespace std;

void print()
{
	int value = 10;

	cout << "print 함수 내부에서의 지역 변수 value : " << value << endl;
	cout << "print function local value : " << value << endl;
}

int main()
{
	int value = 5;

	cout << "main 함수 내부에서의 지역 변수 value : " << value << endl;
	cout << "main function local value : " << value << endl;

	print();

	cout << "다시 main 함수 내부에서의 지역 변수 value : " << value << endl;
	cout << "again main fuction local value : " << value << endl;

	return 0;
}

// study about local variable
// 지역 변수 예제입니다