#include <iostream>

using namespace std;

int main_read()
{
	int sum = 0, value = 0;

	while (cin >> value)
		sum += value;

	cout << "Sum is: " << sum << endl;

	return 0;
}