#include <iostream>
#include <vector>
#include <string>

using namespace std;

constexpr unsigned txt_size(const int&);
const unsigned const_int = 10;
string sa[10];
int ia[10];

int main_ex27()
{
	unsigned buf_size = 1024;
	//int ia[buf_size];
	int iaa[4 * 7 - 14];
	//int iaaa[txt_size(const_int)];
	//char st[11] = "fundamental";

	string sa2[10];
	int ia2[10];

	cout << "sa" << endl;
	for (auto i : sa)
		cout << i << ", ";
	cout << endl;

	cout << "ia" << endl;
	for (auto i : ia)
		cout << i << ", ";
	cout << endl;

	cout << "sa2" << endl;
	for (auto i : sa2)
		cout << i << ", ";
	cout << endl;

	cout << "ia2" << endl;
	for (auto i : ia2)
		cout << i << ", ";
	cout << endl;

	return 0;
}

constexpr unsigned txt_size(const int& val) {
	return val;
}