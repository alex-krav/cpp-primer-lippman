#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_ex31()
{
	//vector<int> ivec(5);
	//vector<int>::size_type cnt = ivec.size();
	//for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
	//	ivec[ix] = cnt;
	//for (auto i : ivec)
	//	cout << i << ", ";
	//cout << endl;

	constexpr int size = 5;
	int ia[size] = { 1,2,3,4,5 };
	for (auto i : ia)
		cout << i << ", ";
	cout << endl;
	for (int* ptr = ia, ix = 0; ix != size && ptr != ia + size; ++ix, ++ptr)
		*ptr = ix;
	for (auto i : ia)
		cout << i << ", ";
	cout << endl;

	int* pi;
	int (*parr)[]; //pointer to int[]
	int* arrofp[3]; // array of 3 int*

	return 0;
}