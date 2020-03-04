#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_iter_arithmetic()
{
	string s("Hello, my name is Vasya");
	
	//for (auto mid = s.begin() + s.size() / 2;
	//	mid != s.end();
	//	++mid)
	//	cout << *mid;
	//cout << endl;

	//auto mid = s.begin() + s.size() / 2;
	//for (auto it = s.begin(); it < mid; ++it)
	//	cout << *it;
	//cout << endl;

	string text("C:WindowsSystem32vcruntime140d.dll");
	char search('W');
	auto beg = text.begin(), end = text.end();
	auto mid = text.begin() + (end - beg) / 2;
	while (mid != end && *mid != search) {
		if (search < *mid)
			end = mid;
		else
			beg = mid + 1; 
		mid = beg + (end - beg) / 2;
	}

	if (mid == end)
		cout << "not found" << endl;
	else 
		cout << "found: " << *mid << endl;

	return 0;
}