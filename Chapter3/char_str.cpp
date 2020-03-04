#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_char_str()
{
	char ca[] = { 'C', '+', '+' };
	char caa[] = { 'C', '+', '+', '\0' };
	cout << strlen(ca) << endl;
	cout << strlen(caa) << endl;

	char ca1[] = "A string example";
	char ca2[] = "A different string";
	if (strcmp(ca1, ca2) < 0)
		cout << "ca1 < ca2" << endl;
	else if (strcmp(ca1, ca2) > 0) 
		cout << "ca1 > ca2" << endl;
	else 
		cout << "ca1 == ca2" << endl;

	strcpy(ca2, ca1);
	strcat(ca2, "!");
	cout << ca2 << endl;

	return 0;
}