#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int ia[3][4];
	int(*p)[4] = ia;
	p = &ia[2];

	int cnt = 0;
	for (int (*p)[4] = ia; p != ia + 3; ++p) {
		for (int *q = *p; q != *p + 4; ++q) {
			*q = cnt;
			++cnt;
		}
	}
	//for (auto p = ia; p != ia + 3; ++p) {
	//	for (auto q = *p; q != *p + 4; ++q)
	//		cout << *q << ' ';
	//	cout << endl;
	//}
	//cout << endl;
	//for (auto p = begin(ia); p != end(ia); ++p) {
	//	for (auto q = begin(*p); q != end(*p); ++q)
	//		cout << *q << ' ';
	//	cout << endl;
	//}
	//cout << endl;

	using int_array = int[4];
	typedef int int_array[4];
	for (int_array* p = ia; p != ia + 3; ++p) {
		for (int* q = *p; q != *p + 4; ++q)
			cout << *q << ' ';
		cout << endl;
	}
	cout << endl;

	return 0;
}