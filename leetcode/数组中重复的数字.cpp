#include "stdafx.h"
#include <unordered_map>
#include <vector>
using namespace std;
class Solution_02 {

	//˼·1��������һ������Ϊnums.size()�ı�洢���� **(nums�����ݱ�sizeС)
	//�������飬����±������ݴ���2�򷵻�nums[i]��Ҳ����re[]������

public:
	int findRepeatNumber(vector<int>& nums) {

		vector<int> re(nums.size(), 0);
		for (int i = 0; i < nums.size(); i++)
		{


			re[nums[i]]++;
			if (re[nums[i]] >= 2)
			{
				return nums[i];
			}



		}
		return 0;

	}

public:
	int findRepeatNumber_unorderd_map(vector<int>& nums) {
		unordered_map<int, bool> map;
		for (int i: nums)
		{
			//��ʱi�������num�е�ֵ
			if (map[i])
			{
				return i;
			}
			map[i] = true;
			

		}
		return -1;

	}

	//˼·����ԭ�ؽ�����
	/*
	��������nums����������ʼֵΪ i = 0��
		��nums[i] = i ;˵���������Ѿ��ڶ�Ӧ����λ��
		��nums[nums[i]] = nums[i] ��������i������nums[i]��ֵ��Ϊnums[i]������nums[i]
		���򽻻�����Ϊi������Ϊnums[i]��Ԫ��λ�ã���������Ӧ����ֵ
	
	
	*/
public:
	int findRepeatNumber_swap(vector<int>& nums) {
		int i = 0;
		while (i < nums.size()) {
			if (nums[i] == i) {
				i++;
				continue;
			}
			if (nums[nums[i]] == nums[i])
				return nums[i];
			swap(nums[i], nums[nums[i]]);
		}
		return -1;
	}
};
