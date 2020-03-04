#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_arr_ptr()
{
	string nums[] = { "one", "two", "three" };
	string* p = &nums[0];
	string* p2 = nums; // compiled to &nums[0]

	int ia[] = { 0,1,2,3,4,5,6,7,8,9 };
	auto ia2(ia); // auto ia2(&ia[0])
	//ia2 = 42;

	decltype(ia) ia3 = { 0, 1, 2, 3,4,5,6,7,8,9 };
	//ia3 = p;
	ia3[4] = 1;

	return 0;
}