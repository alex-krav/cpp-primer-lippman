#include <iostream>

using namespace std;

int main_pointer()
{
	int* ip1, * ip2;
	double dp, * dp2;

	int ival = 42;
	int* p = &ival;

	double dval;
	double* pd = &dval;
	double* pd2 = pd;
	//int* pi = pd;
	//pi = &dval;

	int kval = 42;
	int* kp = &kval;
	cout << *kp << endl;

	*kp = 0;
	cout << *kp << endl;

	return 0;
}