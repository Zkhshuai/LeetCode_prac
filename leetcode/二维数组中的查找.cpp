#include"stdafx.h"
#include <vector>
using namespace std;
class Solution_03
{
public:

	bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
		/*
		1��vector�������ȴ洢�ģ��������ж��У�
		�����Ϊ0����Ҳ�϶�Ϊ0�������п϶����У�
		�����Ϊ1���п϶�Ϊ1��
		2��&&�Ƕ�·�ң����ǰ������������ֱ�ӷ���false�����ж�

		3��Ϊ�˱���ȡֵ��ɵ��ڴ��쳣����������ȡֵ�ж�
		4��if����else if �ǵ��������жϣ��������ĳһ����ֱ����һ��ѭ��
		���if�����if���жϰ�˳�����(��������)��
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
