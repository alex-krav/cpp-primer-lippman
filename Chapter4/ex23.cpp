#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_ex23()
{
	string s = "word";
	string pl = s + (s[s.size() - 1] == 's' ? "" : "s");
	cout << pl << endl;

	return 0;
}