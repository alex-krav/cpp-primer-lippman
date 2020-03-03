#include <iostream>

using namespace std;

/*
first program
*/
// nested /*comments*/ ignored
int main_comments()
{
	cout << "Enter two numbers:" << endl;
	int v1 = 0, v2 = 0;
	cin >> v1 >> v2;
	//cout << "The sum of " << v1 << " and " << v2 
	//  	 << " is " << v1 + v2 << endl;
	cout << "The sum of " << v1;
	cout << " and " << v2;
	cout << " is " << v1 + v2 << endl;
	cout << "/*";
	cout << "*/";
	cout << /* "*/" */";
	cout << /* "*/" /* "/*" */;
	return 0;
}