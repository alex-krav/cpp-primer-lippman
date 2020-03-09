#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_ex13()
{
	//int i; double d;
	//d = i = 3.5;
	//i = d = 3.5;
	//cout << "i=" << i << endl;
	//cout << "d=" << d << endl;
	
	//int i = 0;
	//if (42 = i) cout << "error" << endl;
	//if (i = 42) cout << "success" << endl;

	double dval; int ival; int* pi; int i = 5;
	dval = ival = *(pi = &i);
	cout << "dval=" << dval << endl;
	cout << "ival=" << ival << endl;
	cout << "pi=" << pi << endl;

	return 0;
}