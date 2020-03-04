#include <iostream>
#include <string>

using namespace std;

int main_read_str()
{
	//string s;
	//cin >> s;
	//cout << s << endl;

	//string s1, s2;
	//cin >> s1 >> s2;
	//cout << s1 << s2 << endl;

	//string word;
	//while (cin >> word)
	//	cout << word << endl;

	string line;
	//while (getline(cin, line))
	//	cout << line << endl;

	//while (getline(cin, line))
	//	if (!line.empty())
	//		cout << line << endl;

	//while (getline(cin, line)) {
	//	auto len = line.size();
	//	if (len > 5)
	//		cout << line << endl;
	//}

	//string str = "Hello";
	//string phrase = "Hello World";
	//string slang = "Hiya";

	string s1 = "hello", s2 = "world";
	string s3 = s1 + ", " + s2 + '\n';
	string s4 = s1 + ", ";
	//string s5 = "hello" + ", ";
	string s6 = s1 + ", " + "world";
	//string s7 = "hello" + ", " + s2;

	return 0;
}