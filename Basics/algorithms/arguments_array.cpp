#include <iostream>
using namespace std;

int average(int array[], int count) // int average(int* array, int count);
{
	int sum = 0;
	for (int i = 0; i < count; i++)
	{
		sum += array[i];
	}
	return (sum / count);
}

int main()
{
	int score[5] = { 90 , 75 ,80 ,100, 65 };
	cout << "Æò±Õ Á¡¼ö : " << average(score, 5) << endl;
	
	return 0;
}