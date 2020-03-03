#include <iostream>

using namespace std;

int main_ex15()
{
	int ival = 1.01;
	//int& rval1 = 1.01;
	int& rval2 = ival;
	//int& rval3;

	int i = 0, & r1 = i; double d = 0, & r2 = d;
	r2 = 3.14159; // d = 3.14
	r2 = r1; // d = 0
	i = r2; // i = 0
	r1 = d; // i = 0

	int k, & rk = k;
	k = 5; rk = 10;
	cout << k << " " << rk << endl;

	return 0;
}