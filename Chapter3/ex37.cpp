#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_ex37()
{
	const char ca[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
	const char* cp = ca;
	while (*cp) {
		cout << *cp << endl;
		++cp;
	}
	cout << "---" << endl;

	return 0;
}