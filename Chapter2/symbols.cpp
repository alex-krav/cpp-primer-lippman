#include <iostream>

using namespace std;

int main()
{
	int i = 42;
	int* p = &i; // pointer
	*p = i; // dereference
	int& r2 = *p; // dereference

	int& r = i; // reference
	p = &i; // address

	return 0;
}