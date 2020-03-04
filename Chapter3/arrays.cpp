#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_arrays()
{
	unsigned cnt1 = 42;
	const unsigned cnt2 = 42;
	constexpr unsigned cnt3 = 42;

	int arr[10];
	//int* parr1[cnt1];
	int* parr2[cnt2];
	int* parr3[cnt3];

	const unsigned sz = 3;
	int ia1[sz] = { 0,1,2 };
	int a2[] = { 0,1,2 };
	int a3[5] = { 0,1,2 };
	string a4[3] = { "hi","bye" };
	//int a5[2] = { 0,1,2 };

	char c1[] = { 'C', '+', '+' };
	char c2[] = { 'C', '+', '+', '\0' };
	char c3[] = "C++";
	char c4[7] = "Daniel";
	cout << "c3: " << sizeof(c3) << endl;

	int a[10] = { 0,1,2 };
	//int aa[] = a;
	int aa[3];
	//aa = a;

	int* ptrs[10];
	//int& refs[10];
	int(*Parray)[10] = &a;
	int(&arrRef)[10] = a;
	int* (&arry)[10] = ptrs;

	return 0;
}