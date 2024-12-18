#include <iostream>
using namespace std;

int main()
{
	float float_value = 2.7f;

	double double_value = float_value; // Numeric Promotion (No Data Loss) 숫자 승격 : 데이터 유실 없음
	int int_value = float_value; // Numeric Conversion (Potential Data Loss) 숫자 변환 : 데이터 유실 발생

	cout << "float_value : " << float_value << endl;
	cout << "double_value : " << double_value << endl;
	cout << "int_value : " << int_value << endl;

	return 0;
}

// study about implict cast
// 암시적 형변환 예제