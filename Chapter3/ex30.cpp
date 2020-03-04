#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_ex30()
{
	constexpr size_t array_size = 10;
	int ia[array_size];
	for (size_t ix = 0; ix < array_size; ++ix)
		ia[ix] = ix;
	for (auto i : ia)
		cout << i << ", ";
	cout << endl;

	int a1[2];
	int a2[2];
	//a2 = a1;

	return 0;
}