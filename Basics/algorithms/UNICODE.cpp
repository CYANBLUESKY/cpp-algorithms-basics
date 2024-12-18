#include <iostream>
#include <io.h>
#include <fcntl.h>
using namespace std;
int main()
{
	wchar_t messwage_korean[] = L"æ»≥Á«œººø‰"; ;
	_setmode(_fileno(stdout) ,_O_U16TEXT);
	wcout << messwage_korean << endl;

	return 0;
}