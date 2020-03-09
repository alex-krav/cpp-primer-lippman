#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_expr()
{
	//int i = 0;
	//cout << i << " " << ++i << endl;

	//int i = 1024;
	//int k = -i;
	//bool b = true;
	//bool b2 = -b;
	//cout << "k: " << k << endl;
	//cout << "b2: " << b2 << endl;

	//int j = 1 / 0;
	//cout << "j: " << j << endl;

	//short short_value = 32767;
	//short_value += 1;
	//cout << "short_value: " << short_value << endl;

	//int ival2 = 21 / 7;
	//int ival1 = 21 / 6;
	//cout << ival1 << endl;
	//cout << ival2 << endl;

	//int ival = 42;
	//double dval = 3.14;
	//ival % 12;
	//ival% dval;

	cout << "-21 % 8 = " << (-21 % 8) << endl;
	cout << "-21 % -8 = " << (-21 % -8) << endl;
	cout << "21 % 8 = " << (21 % 8) << endl;
	cout << "21 % -8 = " << (21 % -8) << endl;

	cout << (12 / 3 * 4 + 5 * 15 + 24 % 4 / 2) << endl;
	// 16 + 75 + 0 = 91 

	cout << (-30 * 3 + 21 / 5) << endl; //-90+4=-86
	cout << (-30 + 3 * 21 / 5) << endl; //-30+12=-18
	cout << (30 / 3 * 21 % 5) << endl;  //0
	cout << (-30 / 3 * 21 % 4) << endl; //-2

	return 0;
}