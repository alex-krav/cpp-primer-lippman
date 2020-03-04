#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_ex20()
{
	int i;
	vector<int> nums;
	
	while (cin >> i) {
		nums.push_back(i);
	}

	for (decltype(nums.size()) k = 0; k < nums.size() - 1; k++) {
		cout << nums[k] + nums[k + 1] << " ";
	}
	cout << endl;

	return 0;
}