#include "stdafx.h"
#include <unordered_map>
#include <vector>
using namespace std;
class Solution_02 {

	//思路1：建立另一个长度为nums.size()的表存储数据 **(nums的数据比size小)
	//遍历数组，如果新表中数据大于2则返回nums[i]，也就是re[]的索引

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
			//此时i代表的是num中的值
			if (map[i])
			{
				return i;
			}
			map[i] = true;
			

		}
		return -1;

	}

	//思路二：原地交换法
	/*
	遍历数组nums，设索引初始值为 i = 0；
		若nums[i] = i ;说明此数字已经在对应索引位置
		若nums[nums[i]] = nums[i] 代表索引i与索引nums[i]的值都为nums[i]，返回nums[i]
		否则交换索引为i和索引为nums[i]的元素位置，交换到对应索引值
	
	
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
