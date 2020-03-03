#include <iostream>

using namespace std;

int main_ex36()
{
	int a = 3, b = 4;
	decltype(a) c = a; //int=3
	decltype((b)) d = a; //int&=3
	++c; 
	++d;
	//a=4,b=4,c=4,d=4;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;

	return 0;
}