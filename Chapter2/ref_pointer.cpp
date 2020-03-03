#include <iostream>

using namespace std;

int main_rp()
{
	int i = 42;
	int* p;
	int*& r = p;
	r = &i;
	*r = 0;
	cout << *r;

	return 0;
}