#include"stdafx.h"
#include <vector>
using namespace std;
class Solution_03
{
public:

	bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
		/*
		1、vector是行优先存储的，所以先判断行，
		如果行为0则列也肯定为0；（有行肯定有列）
		如果行为1则列肯定为1；
		2、&&是短路且，如果前面条件不符合直接返回false跳出判断

		3、为了避免取值造成的内存异常，尽量少用取值判断
		4、if搭配else if 是单次条件判断，如果符合某一条则直接下一次循环
		如果if后面跟if则判断按顺序进行(尽量少用)。
		*/
		 		bool re = false;
		 		int i = matrix.size()-1;
		 		int j = 0;

		 		while (i >= 0 && j < matrix[0].size())
		 		{
		 			 if (target < matrix[i][j])
		 			 {	 
		 				i--;				
		 			 }
		 	
		 			 else if (target > matrix[i][j])
		 			 {
		 				 j++;
		 
		 			 }
					 else 
		 			 {
		 				 re = true;
		 				 break;
		 			 }
		 			
		 			
		 		}
		 
		 		return re;
		 	}

// 		bool re = false;
// 		int i = 0;
// 		int j = 0;
// 		if (matrix.size() == 0 || matrix[0].size() == 0 || target < matrix[0][0])
// 		{
// 			return re;
// 		}
// 
// 		while (i < matrix.size() && j < matrix[0].size()/*&& matrix.empty()*/)
// 		{
// 			if (target > matrix[i][j])
// 			{
// 				j++;
// 			}
// 
// 			else if (target > matrix[i][j-1] &&target < matrix[i][j])
// 			{
// 				j--;
// 				i++;
// 				
// 
// 			}
// 			else if (j == matrix[0].size())
// 			{
// 				j = 0;
// 				i++;
// 			}
// 
// 			else 
// 			{
// 				re = true;
// 				break;
// 			}	
// 			
// 		}
// 		return re;

};
