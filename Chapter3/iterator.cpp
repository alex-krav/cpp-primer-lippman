#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_iter()
{
	string s("some string");
	if (s.begin() != s.end()) {
		auto it = s.begin();
		*it = toupper(*it);
	}
	cout << s << endl;

	return 0;
}