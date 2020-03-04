#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_begin_end()
{
	int ia[] = { 0,1,2,3,-4,5,6,7,8,9 };
	int* beg = begin(ia);
	int* last = end(ia);

	while (beg != last && *beg >= 0)
		++beg;

	if (beg == last)
		cout << "all positive" << endl;
	else
		cout << *beg << endl;

	return 0;
}