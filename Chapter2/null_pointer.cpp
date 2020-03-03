#include <iostream>
#include <cstdlib>

using namespace std;

int main_null()
{
	//int* p1 = nullptr;
	//int* p2 = 0;
	//int* p3 = NULL;
	//int zero = 0;
	//int* pi = zero;

	//int i = 42;
	//int* pi = 0;
	//int* pi2 = &i;
	//int* pi3;
	//pi3 = pi2;
	//pi2 = 0;
	//int ival = 17;
	//pi = &ival;
	//*pi = 0;
	//cout << ival;

	int ival = 1024;
	int* pi = 0;
	int* pi2 = &ival;
	int* pi3;
	int* pi4 = pi2;
	int* pi5 = nullptr;
	if (pi)
		cout << "pi" << endl;
	if (pi2)
		cout << "pi2" << endl;
	//if (pi3)
	//	cout << "pi3" << endl;

	if (pi == pi2)
		cout << "pi == pi2" << endl;
	if (pi2 == pi4)
		cout << "pi2 == pi4" << endl;
	if (pi5 == nullptr)
		cout << "pi5 is null pointer" << endl;

	return 0;
}