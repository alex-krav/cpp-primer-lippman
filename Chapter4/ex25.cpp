#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_ex25()
{
	//cout << (~'q' << 6) << endl; // 01000000 = 128, no -> -7296
	// 32bit ints, 8bit chars, Latin-1 charset, q=01110001

	unsigned long ul1 = 3, ul2 = 7;
	cout << (ul1 & ul2) << endl; // 00000011 & 00000111 = 00000011 = 3
	cout << (ul1 | ul2) << endl; // 00000111 = 7
	cout << (ul1 && ul2) << endl;// 1
	cout << (ul1 || ul2) << endl;// 1

	return 0;
}