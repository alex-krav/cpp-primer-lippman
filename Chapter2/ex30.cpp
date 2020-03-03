#include <iostream>

using namespace std;

int main_ex30()
{
	int i = 42;
	const int v2 = 0; int v1 = v2;
	int* p1 = &v1, & r1 = v1;
	const int* p2 = &v2, * const p3 = &i, & r2 = v2;

	r1 = v2; // error
	//p1 = p2; p2 = p1; // error, ok
	//p1 = p3; p2 = p3; // error, ok

	return 0;
}