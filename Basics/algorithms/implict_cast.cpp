#include <iostream>
using namespace std;

int main()
{
	float float_value = 2.7f;

	double double_value = float_value; // Numeric Promotion (No Data Loss) ���� �°� : ������ ���� ����
	int int_value = float_value; // Numeric Conversion (Potential Data Loss) ���� ��ȯ : ������ ���� �߻�

	cout << "float_value : " << float_value << endl;
	cout << "double_value : " << double_value << endl;
	cout << "int_value : " << int_value << endl;

	return 0;
}

// study about implict cast
// �Ͻ��� ����ȯ ����