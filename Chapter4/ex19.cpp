#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_ex19()
{
	int ival = 17;
	int* ptr = &ival;
	vector<int> vec; 

	//cout << "ptr=" << ptr << endl;
	//if (ptr != 0 && *ptr++) {
	//	cout << "ptr=" << ptr << endl;
	//	cout << "*ptr=" << *ptr << endl;
	//}

	//if (ival++ && ival) 
	//	cout << "ival="<<ival << endl;

	ival = 0;
	vec.push_back(1);
	vec.push_back(2);
	if (vec[ival++] <= vec[ival]) // 1 <= 2 OR 1 <= 1
		cout << "success" << endl;

	return 0;
}