#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_member()
{
	string s1 = "a string", * p = &s1;
	auto n = s1.size(); cout << "n=" << n << endl;
	n = (*p).size(); cout << "n=" << n << endl;
	n = p->size(); cout << "n=" << n << endl;

	return 0;
}