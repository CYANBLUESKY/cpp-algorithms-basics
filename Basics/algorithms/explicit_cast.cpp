#include <iostream>
using namespace std;

int main()
{
	int int_a = 100;
	
	int int_b = 500;

	int int_avg = (int_a + int_b) / 2;
	float float_avg_1 = (int_a + int_b) / 2; // 암시적 형변환 : 데이터 유실 impplicit cast : (Potential Data Loss)
	float float_avg_2 = float(int_a + int_b) / 2; // 명시적 형변환 explicit cast

	cout << "int_avg : " << int_avg << endl;
	cout << "float_avg_1 : " << float_avg_1 << endl;
	cout << "float_avg_2 : " << float_avg_2 << endl;

	return 0;
}