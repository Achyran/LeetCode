/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
//#include "headers.h"
class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int i = 0;
        for (const int num : nums)
            if (num != 0)
                nums[i++] = num;

        while (i < nums.size())
        nums[i++] = 0;
         
    }
};
// @lc code=end

