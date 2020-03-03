#include <iostream>

using namespace std;

int get_size();
extern const int bufSize = get_size();

int main_constant()
{
	const int bufSize = get_size();
	int i = 42;
	const int ci = i;
	int j = ci;

	return 0;
}

int get_size() {
	return 42;
}