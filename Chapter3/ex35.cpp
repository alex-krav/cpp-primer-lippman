#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_ex35()
{
	int arr[] = { 1,2,3,4,5 };
	// cout << sizeof(arr) << endl; //20 bytes
	for (int* b = arr, *e = end(arr); b < e; ++b) {
		*b = 0;
	}
	for (auto i : arr)
		cout << i << ", ";
	cout << endl;

	return 0;
}