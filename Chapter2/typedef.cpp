#include <iostream>

using namespace std;

class Sales_item {};

int main_typedef()
{
	typedef double wages;
	typedef wages base, * p;
	using SI = Sales_item;

	wages hourly = 1.1, weekly = 2.2;
	SI item;

	cout << hourly + weekly << endl;

	return 0;
}
