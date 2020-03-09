#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_bit()
{
	//unsigned char bits = 0233;
	//cout << (bits << 8) << endl;
	//cout << (bits << 31) << endl;
	//cout << (bits >> 3) << endl;
	//
	//bits = 0227;
	//cout << ~bits << endl;
	
	//unsigned char b1 = 0145;
	//unsigned char b2 = 0257;
	//cout << (b1 & b2) << endl;
	//cout << (b1 | b2) << endl;
	//cout << (b1 ^ b2) << endl;

	unsigned long quiz1 = 0;

	quiz1 |= 1UL << 27;
	bool status = quiz1 & (1UL << 27);
	cout << quiz1 << endl;
	cout << status << endl;

	quiz1 &= ~(1UL << 27);
	status = quiz1 & (1UL << 27);
	cout << quiz1 << endl;
	cout << status << endl;

	return 0;
}