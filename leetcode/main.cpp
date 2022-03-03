#include "stdafx.h"
#include <vector>
#include <iostream>
#include "二维数组中的查找.cpp"
using namespace std;
int main()
{
	Solution_03 sl_03;
	bool re = false;
	vector<vector<int>> matrix{{6}};
// 	{
// 		{1, 4, 7, 11, 15},
// 		{ 2, 5, 8, 12, 19 },
// 		{ 3, 6, 9, 16, 22 },
// 		{ 10, 13, 14, 17, 24 },
// 		{ 18, 21, 23, 26, 30 }
// 	/*	re = matrix.empty();*/
	
/*	cout << matrix[0].size() << endl;*/
	re = sl_03.findNumberIn2DArray(matrix ,6);

	cout << re << endl;
	cout << "si=" << matrix.size() << endl;
/*	cout << "sj=" << matrix[0].size() << endl;*/
	system("pause");

}