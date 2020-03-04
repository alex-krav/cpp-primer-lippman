#include <iostream>
#include <string>

//using namespace std;
using std::string;

int main_string()
{
	string s1;
	string s2 = s1;
	string s3 = "hiya";
	string s4(10, 'c');
	string s5(s1);
	string s6("value");
	string s7 = string(7, 's');

	std::cout << "s1=" << s1 << std::endl;
	std::cout << "s2=" << s2 << std::endl;
	std::cout << "s3=" << s3 << std::endl;
	std::cout << "s4=" << s4 << std::endl;
	std::cout << "s5=" << s5 << std::endl;
	std::cout << "s6=" << s6 << std::endl;
	std::cout << "s7=" << s7 << std::endl;

	return 0;
}