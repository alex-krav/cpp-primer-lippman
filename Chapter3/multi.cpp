#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main_multi()
{
	//const int row = 3, col = 4;
	//int ia[row][col] = {
	//	{0, 1, 2, 3},
	//	{4,5,6,7},
	//	{8,9,10,11}
	//};
	//int ia[3][4] = { {0},{4},{8} };
	//int ia[3][4] = { 0,3,6,9,1 };

	//for (int i = 0; i < row; ++i) {
	//	for (int j = 0; j < col; ++j)
	//		cout << ia[i][j] << " ";
	//	cout << endl;
	//}
	//cout << endl;

	constexpr size_t rowCnt = 3, colCnt = 4;
	int ia[rowCnt][colCnt];
	//for (size_t i = 0; i != rowCnt; ++i) {
	//	for (size_t j = 0; j != colCnt; ++j)
	//		ia[i][j] = i * colCnt + j;
	//}
	//
	//for (size_t i = 0; i != rowCnt; ++i) {
	//	for (size_t j = 0; j != colCnt; ++j)
	//		cout << ia[i][j] << " ";
	//	cout << endl;
	//}
	//cout << endl;

	size_t cnt = 0;
	for (auto& row : ia) {
		for (auto& col : row) {
			col = cnt;
			++cnt;
		}
	}
	for (const auto& row : ia) {
		for (auto col : row)
			cout << col << " ";
		cout << endl;
	}
	cout << endl;

	//for (auto row : ia)
	//	for (auto col : row)
	//		cout << col << endl;


	return 0;
}