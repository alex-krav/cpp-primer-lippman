#include <iostream>

using namespace std;

int main_rc()
{
	//const int ci = 1024;
	//const int& r1 = ci;
	//r1 = 42;
	//int& r2 = ci;

	//int i = 42;
	//const int& r1 = i;
	//const int& r2 = 42;
	//const int& r3 = r1 * 2;
	//int& r4 = r1 * 2;

	//double dval = 3.14;
	//const int& ri = dval;
	//ri = 4;

	int i = 42;
	int& r1 = i;
	const int& r2 = i;
	r1 = 0;
	//r2 = 0;

	return 0;
}