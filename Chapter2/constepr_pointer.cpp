#include <iostream>

using namespace std;

int i1 = 17;
int j2 = 31;
//const int null = 0;

int main_ex32()
{
	const int* p = nullptr;
	constexpr int* q = nullptr;

	constexpr int* np = nullptr;
	int j = 0;
	constexpr int i = 42;

	constexpr const int* p1 = &i1; 
	constexpr int* p2 = &j2;

	// ex32
	//const int null = 0;
	//int *p = null; 

	return 0;
}