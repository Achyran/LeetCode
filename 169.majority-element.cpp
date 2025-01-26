/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
#include "headers.h"
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            map[nums[i]] ++;
            if(map[nums[i]] > nums.size()/2) return nums[i];
        }
        
        return 0;
    }
};
// @lc code=end

