#include <iostream>

using namespace std;

int main_ex27()
{
	//const int i2 = i, &r = i; // ok
	//int i = -1; & r = 0; // error
	//int *const p2 = &i2; // ok -> error
	//const int i = -1, &r = 0; // ok
	//const int *const p3 = &i2; // ok
	//const int *p1 = &i2; // ok
	// const int &const r2; // error

	//int i, *const cp = i; // ,error
	//int *p1, *const p2; // // ,error
	//const int ic, &r = ic; // error, ok if initialized
	//const int *const p3; // error
	//const int *p; // ok
	
	//i = ic; // ok
	//p1 = p3; // error
	//p1 = &ic; // error
	//p3 = &ic; // error
	//p2 = p1; // error
	//ic = *p3; // error

	return 0;
}