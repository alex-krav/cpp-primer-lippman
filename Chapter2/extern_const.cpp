#include <iostream>

using namespace std;

extern const int bufSize;

int main_ext()
{
	cout << bufSize << endl;

	//const int buf;
	int cnt = 0;
	const int sz = cnt;
	++cnt; 
	//++sz;

	return 0;
}