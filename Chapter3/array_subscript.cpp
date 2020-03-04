#include <iostream>
#include <vector>
#include <string>

using namespace std;
unsigned scores[11];
int main_array_sub()
{
	// unsigned scores[11] = {};
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100)
			++scores[grade / 10];
	}

	for (auto i : scores)
		cout << i << " ";
	cout << endl;

	return 0;
}