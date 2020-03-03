#include <iostream>

using namespace std;

int main_ref()
{
	int ival = 1024;
	int& refVal = ival;
	//int& refVal2; 
	refVal = 2;
	int ii = refVal;
	int& refVal3 = refVal;

	int i = 1024, i2 = 2048;
	int& r = i, r2 = i2;
	int i3 = 1024, & ri = i3;
	int& r3 = i3, & r4 = i2;

	//int &refVal4 = 10;
	double dval = 3.14;
	//int& refVal5 = dval;
	//int& refVal6 = (2 + 3);

	return 0;
}