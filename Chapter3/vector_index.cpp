#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_index()
{
	//vector<unsigned> scores(11, 0);
	//unsigned grade;
	//while (cin >> grade) {
	//	if (grade <= 100)
	//		++scores[grade / 10];
	//}
	//for (auto i : scores)
	//	cout << i << " ";
	//cout << endl;

	vector<int> ivec2(10);
	int i = 10;
	if (i > 0 && i < ivec2.size())
		cout << ivec2[10] << endl;
	else
		cout << "index out of range" << endl;

	return 0;
}