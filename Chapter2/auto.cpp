#include <iostream>

using namespace std;

int main_auto()
{
	//auto i = 0, * p = &i;
	//auto sz = 0, pi = 3.14;

	int val = 3.14;
	double dval = 3;
	
	int i = 0, & r = i;
	auto a = r;

	const int ci = i, & cr = ci;
	auto b = ci; // int
	auto c = cr; // int
	auto d = &i; // int*
	auto e = &ci; // const int*

	const auto f = ci;

	auto& g = ci;
	// auto& h = 42;
	const auto& j = 42;

	auto k = ci, & l = i;
	auto& m = ci, * p = &ci;
	//auto& n = i, * p2 = &ci;

	a = 42; //ok
	b = 42; //ok: top-level const is dropped
	c = 42; //ok: top-level const is dropped
	//d = 42; //error
	//e = 42; //error
	//g = 42; //error

	const int i1 = 42; //ok
	auto j1 = i1; //ok: int
	const auto &k1 = i1; //ok: int&
	auto *p1 = &i1; //ok: int*
	const auto j2 = i1, &k2 = i1; //const int j2 = 42 (ok), const int& k2 = 42 (ok)

	const int& k3 = 42;

	return 0;
}