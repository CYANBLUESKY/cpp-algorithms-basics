#include <iostream>
using namespace std;

int value = 5; //global variable 전역 변수

int main()
{
	int value = 55; //local variable 지역변수

	cout << value << endl; // print local variable 지역 변수 출력
	cout << ::value << endl; // print global variable 전역 변수 출력

	return 0;
}

// study about global variable vs local variable
// 전역변수 vs 지역 변수 예제