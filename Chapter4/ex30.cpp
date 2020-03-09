#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_ex30()
{
	//(sizeof (x + y));
	//(sizeof ((p->mem)[i]));
	//((sizeof a) < b);
	//(sizeof (f()));

	int x = 1, y = 1;
	bool somevalue = true;
	somevalue ? ++x, ++y : --x, --y;
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;

	return 0;
}