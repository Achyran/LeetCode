/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
#include "headers.h"
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int canidate =  nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            if(canidate == nums[i]) canidate = nums[i+1];
        }
        
        return canidate;


    }
};
// @lc code=end

