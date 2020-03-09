#include <iostream>
#include <vector>
#include <string>
#include "Sales_data.h"

using namespace std;

int main_sizeof()
{
	//Sales_data data, * p;
	//cout << sizeof(Sales_data) << endl;
	//cout << sizeof data << endl;
	//cout << sizeof p << endl;
	//cout << sizeof *p << endl;
	//cout << sizeof data.revenue << endl;
	//cout << sizeof Sales_data::revenue << endl;

	char c = 'a', & cref = c, * cp = &c;
	char carr[] = { 'a','b','c','d','e' };
	//cout << sizeof c << endl;
	//cout << sizeof cref << endl;
	//cout << sizeof cp << endl;
	//cout << sizeof *cp << endl;
	//cout << sizeof carr << endl;
	//cout << sizeof *carr << endl;
	//cout << sizeof string << endl;
	//cout << sizeof vector<string> << endl;

	constexpr size_t sz = sizeof(carr) / sizeof(*carr);
	int arr2[sz];
	cout << sz << endl;

	return 0;
}