/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
//#include "headers.h"

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == target) return i;
            if(nums[i] > target) return i -1;
        }
        
        return nums.size() +1;
    }
};
// @lc code=end

