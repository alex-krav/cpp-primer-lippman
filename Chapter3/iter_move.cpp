#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_iter_mv()
{
	string s;
	//string s("hello world");
	//for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
	//	*it = toupper(*it);
	//cout << s << endl;

	for (auto it = s.end(); it != s.begin() && !isspace(*(--it)); ) {
		*it = toupper(*it);
	}
	cout << s << endl;

	return 0;
}