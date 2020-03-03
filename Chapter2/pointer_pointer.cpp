#include <iostream>

using namespace std;

int main_pp()
{
	int ival = 1024;
	int* pi = &ival;
	int** ppi = &pi;

	cout << "The value of ival\n"
		<< "direct value: " << ival << "\n"
		<< "indirect value: " << *pi << "\n"
		<< "doubly indirect value: " << **ppi << endl;

	return 0;
}