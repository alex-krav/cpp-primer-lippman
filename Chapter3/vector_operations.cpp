#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_vec_ops()
{
	vector<int> v{ 1,2,3,4,5,6,7,8,9 };
	for (auto& i : v)
		i *= i;
	for (auto i : v)
		cout << i << " ";
	cout << endl;

	cout << "empty: " << v.empty() << endl;
	cout << "[0]: " << v[0] << endl;

	vector<int> v1{ 1,2,3 };
	cout << "v < v1: " << (v < v1) << endl;

	//cout << vector<int>::size_type << endl;

	return 0;
}