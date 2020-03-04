#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_arr_deref()
{
	int ia[] = { 0,2,4,6,8 };
	int last = *(ia + 4);
	cout << last << endl;

	return 0;
}