#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_logical()
{
	//vector<string> text = { "My", "name", "is.", "", "Vasya" };
	//for (const auto& s : text) {
	//	cout << s;
	//	if (s.empty() || s[s.size() - 1] == '.')
	//		cout << endl;
	//	else
	//		cout << " ";
	//}
	//cout << endl;

	//bool bool_val = true;
	//int int_val = 10;
	//
	//if (bool_val == true)
	//	cout << "bool == true" << endl; // ok
	//if (int_val == true)
	//	cout << "int == true" << endl;
	//
	//if (bool_val == 1)
	//	cout << "bool == 1" << endl; // ok
	//if (int_val == 1)
	//	cout << "int == 1" << endl;

	const char* cp = "Hello";
	
	if (cp && *cp)
		cout << *cp << endl;
		
	return 0;
}