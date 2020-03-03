#include <iostream>

using namespace std;

constexpr int size();

int main_ce()
{
	constexpr int mf = 20;
	constexpr int limit = mf + 1;
	//constexpr int sz = size();

	return 0;
}

constexpr int size() {
	return 5;
}