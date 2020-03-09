#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_ternary()
{
	int grade = 95;
	//string finalgrade = (grade < 60) ? "fail" : "pass";
	string finalgrade = (grade > 90) ? "high pass" : ((grade < 60) ? "fail" : "pass");
	cout << finalgrade << endl;

	//cout << (grade < 60) ? "fail" : "pass";
	//cout << grade < 60 ? "fail" : "pass";

	return 0;
}