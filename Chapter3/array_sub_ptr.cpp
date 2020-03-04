#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_sub_ptr()
{
	int ia[] = { 0,2,4,6,8 };
	int i = ia[2];
	int* p = ia;
	i = *(p + 2);
	cout << i << endl;

	int* p1 = &ia[2];
	int j = p1[1];
	int k = p1[-2];
	cout << *p1 << " " << j << " " << k << endl;

	return 0;
}