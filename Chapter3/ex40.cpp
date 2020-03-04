#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_ex40()
{
	char s1[] = { 'M', 'y' };
	char s2[] = { 'n', 'a', 'm', 'e' };
	char s3[8];

	strcpy(s3, s1);
	strcat(s3, s2);
	for (char c : s3)
		cout << c;
	cout << endl;

	return 0;
}