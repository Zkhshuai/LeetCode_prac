// leetcode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <map>
using namespace std;
class Solution_01{
public:
	vector<int> twoSum(vector<int>& nums, int target) {

		map<int, int> hashmap;
		vector<int> b = { 2,-1 };
		hashmap[nums[0]] = 0;
		for (int i = 1; i < 20; ++i)
		{
			if (hashmap.count(target - nums[i]) > 0) {
				b[0] = hashmap[target - nums[i]];
				b[1] = i;

				break;
			}
			hashmap[nums[i]] = i;
		}
		return b;
	}


};