#include <iostream>

using namespace std;

int main_ex37()
{
	int a = 3, b = 4;
	decltype(a) c = a; // int c = 3;
	decltype(a = b) d = a; // int& d = a;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;

	return 0;
}