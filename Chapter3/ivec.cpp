#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int arr[] = { 0,1,2,3,4,5 };
	vector<int> ivec(begin(arr), end(arr));
	for (auto i : ivec)
		cout << i << ", ";
	cout << endl;
	vector<int> subVec(arr + 1, arr + 4);
	for (auto i : subVec)
		cout << i << " ";
	cout << endl;

	return 0;
}