#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_ptr_ari()
{
	constexpr size_t sz = 5;
	int arr[sz] = { 1,2,3,4,5 };
	int* ip = arr;
	int* ip2 = ip + 4;

	int* p = arr + sz;
	int* p2 = arr + 10;
	cout << *p2 << endl;

	auto n = end(arr) - begin(arr);
	cout << "n: " << n << endl;

	int* b = arr, * e = arr + sz;
	while (b < e) {
		cout << *b << ", ";
		++b;
	}
	cout << endl;

	return 0;
}