/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */

// @lc code=start
//#include "headers.h"
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map;

        for (int i = 0; i < nums.size(); i++)
        {
            if(map.find(abs(nums[i]-k)) != map.end()){
                return true;
            }else{
                map[nums[i]] = i;
            }
        }
        
        return false;
    }
};
// @lc code=end

