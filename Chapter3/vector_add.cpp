#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_add()
{
	//vector<int> v2;
	//for (int i = 0; i != 100; ++i)
	//	v2.push_back(i);
	//cout << "v2: " << v2.size() << endl;
	//
	//string word;
	//vector<string> text;
	//while (cin >> word)
	//	text.push_back(word);
	//cout << "text: " << text.size() << endl;

	int num;
	vector<int> numbers;
	while (cin >> num)
		numbers.push_back(num);
	cout << "numbers: " << numbers.size() << endl;

	return 0;
}