#include <iostream>

using namespace std;

int main_ex5()
{
	string str, word;

	while (cin >> word) {
		str += word + ' ';
	}

	cout << str << endl;

	return 0;
}