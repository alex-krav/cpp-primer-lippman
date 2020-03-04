#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_ex12()
{
	vector<vector<int>> ivec;
	//vector<string> svec = ivec;
	vector<string> svec(10, "null");

	vector<int> v1;
	cout << "v1: " << v1.size() << endl;
	vector<int> v2(10);
	cout << "v2: " << v2.size() << endl;
	vector<int> v3(10, 42);
	cout << "v3: " << v3.size() << endl;
	vector<int> v4{ 10 };
	cout << "v4: " << v4.size() << endl;
	vector<int> v5{ 10,42 };
	cout << "v5: " << v5.size() << endl;
	vector<string> v6{ 10 };
	cout << "v6: " << v6.size() << endl;
	vector<string> v7{ 10,"hi" };
	cout << "v7: " << v7.size() << endl;

	return 0;
}