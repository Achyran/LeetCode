/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> list;
        for (int i = 0; i < nums.size(); i++)
        {
	        int it = target - nums[i];
	        if (list.find(it) != list.end()) return { list[it], i };
	        else list[nums[i]] = i;
        }
        throw;
    }
};
// @lc code=end

