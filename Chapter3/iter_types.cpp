#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_iter_types()
{
	vector<int>::iterator it;
	string::iterator it2;
	vector<int>::const_iterator it3;
	string::const_iterator it4;
	
	vector<string> text = { "some", "text", "", "here" };
	for (auto it = text.cbegin(); it != text.cend() && !it->empty(); ++it) {}
		cout << *it << endl;

	return 0;
}