/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
//#include "headers.h"
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_map<int,int> map;

        for (int i = 0; i < nums.size(); i++)
        {
            if(map.find(nums[i]) == map.end()){
                map[nums[i]] = i;
            }else return true;
        }
        
        return false;
    }
};
// @lc code=end

