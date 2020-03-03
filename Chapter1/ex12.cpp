#include <iostream>

using namespace std;

int mai_ex12()
{
	int sum = 0;
	for (int i = -100; i <= 100; ++i)
		sum += i;

	cout << "Sum is " << sum << endl; 

	return 0;
}