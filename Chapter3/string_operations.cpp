#include <iostream>
#include <string>

using namespace std;
//using std::string;

int main_str_ops()
{
	string s = "asdf";
	cin >> s;
	cout << s << endl;
	getline(cin, s);
	cout << s << endl;
	cout << s.empty() << endl;
	cout << s.size() << endl;
	cout << s[0] << endl;
	
	string s1 = "Hello ";
	string s2 = "World";
	cout << s1 + s2 << endl;
	cout << (s1 == s2) << endl;
	cout << (s1 != s2) << endl;
	cout << (s1 < s2) << endl;

	return 0;
}