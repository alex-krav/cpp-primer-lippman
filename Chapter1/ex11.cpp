#include <iostream>

using namespace std;

int main_ex11()
{
	int v1, v2;
	cout << "Enter two numbers: ";
	cin >> v1 >> v2;

	while (v1 <= v2) {
		cout << v1 << endl;
		v1++;
	}

	return 0;
}