#include <iostream>

using namespace std;

int main_cp()
{
	const double pi = 3.14;
	//double* ptr = &pi;
	const double* cptr = &pi;
	//*cptr = 42;

	double dval = 3.14;
	cptr = &dval;

	//int errNumb = 0;
	//int* const curErr = &errNumb;
	//const double pi = 3.14159;
	//const double* const pip = &pi;

	return 0;
}