#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_ex36()
{
	int a1[] = { 1,2,3,4 };
	int a2[] = { 1,2,3,5 };
	int a3[] = { 1,2,3,4,5 };
	int a4[] = { 1,2,3,4 };

	//bool equal = true;
	//int* b1 = a1, * b2 = a4, * e1 = end(a1), * e2 = end(a4);
	//while(b1 < e1 && b2 < e2) { 
	//	if (*b1 != *b2) {
	//		equal = false;
	//		break;
	//	}
	//	++b1, ++b2;
	//}
	//if (equal && b1 == e1 && b2 == e2)
	//	cout << "b1 == b2" << endl;
	//else 
	//	cout << "b1 != b2" << endl;

	vector<int> v1{ 1,2,3,4 };
	vector<int> v2{ 1,2,3,5 };
	vector<int> v3{ 1,2,3,4,5 };
	vector<int> v4{ 1,2,3,4 };

	bool equal = true;
	auto b1 = v1.begin(), e1 = v1.end(), b2 = v4.begin(), e2 = v4.end();
	while (b1 < e1 && b2 < e2) {
		if (*b1 != *b2) {
			equal = false;
			break;
		}
		++b1, ++b2;
	}
	if (equal && b1 == e1 && b2 == e2)
		cout << "b1 == b2" << endl;
	else
		cout << "b1 != b2" << endl;

	return 0;
}