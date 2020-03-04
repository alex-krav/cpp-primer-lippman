#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_ex23()
{

	//vector<string> text = { "some", "text", "", "here" };
	//for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
	//	for (char& c : *it)
	//		c = toupper(c);
	//	cout << *it << endl;
	//}

	vector<int> nums(10);
	for (decltype(nums.size()) i = 0; i != 10; ++i)
		nums[i] = i;
	for (auto it = nums.begin(); it != nums.end(); ++it)
		*it = *it * 2;
	for (auto n : nums)
		cout << n << " ";
	cout << endl;
	
	return 0;	
}