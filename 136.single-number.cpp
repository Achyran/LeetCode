/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
//#include "headers.h"
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int,int> map;

        for (int i = 0; i < nums.size(); i++)
        {
            
            if(map.find(nums[i]) == map.end()){
                map[nums[i]] = 1;
            }else{
                map[nums[i]]++;
            }
            
        }

    for (auto& it: map) {
        if(it.second == 1) return it.first; 
    }
        
        return 0;


    }
};
// @lc code=end

