/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
//#include "headers.h"
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int result = size;
        for (int i = 0; i < size; i++)
        {
            result += i - nums[i];
        }
        return result;
        
        

    }
};
// @lc code=end

