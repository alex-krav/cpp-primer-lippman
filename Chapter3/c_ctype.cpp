#include <iostream>
#include <cctype>

using namespace std;

int main_cctype()
{
	cout << "isalnum: " << isalnum('9') << endl;
	cout << "isalpha: " << isalpha('a') << endl;
	cout << "iscntrl: " << iscntrl(0x00) << endl;
	cout << "isdigit: " << isdigit('1') << endl;
	cout << "isgraph: " << isgraph('1') << endl;
	cout << "islower: " << islower('k') << endl;
	cout << "isprint: " << isprint('k') << endl;
	cout << "ispunct: " << ispunct(',') << endl;
	cout << "isspace: " << isspace(' ') << endl;
	cout << "isupper: " << isupper('J') << endl;
	cout << "isxdigit: " << isxdigit('F') << endl;
	cout << "tolower: " << tolower('N') << endl;
	cout << "toupper: " << toupper('m') << endl;

	return 0;
}