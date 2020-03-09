#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_incr()
{
	int i = 0, j;
	j = ++i;
	j = i++;
	cout << "j=" << j << ", i=" << i << endl;

	return 0;
}