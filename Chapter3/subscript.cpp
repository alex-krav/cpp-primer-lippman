#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main_sub()
{
	//string s = "asdf";
	//if (!s.empty())
	//	cout << s[0] << endl;
	//else
	//	cout << "string is empty" << endl;

	string s("some string");
	//if (!s.empty())
	//	s[0] = toupper(s[0]);
	//cout << s << endl;

	for (decltype(s.size()) index = 0;
		index != s.size() && !isspace(s[index]);
		++index)
		s[index] = toupper(s[index]);
	
	cout << s << endl;

	return 0;
}