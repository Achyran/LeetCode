/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */

// @lc code=start
#include "headers.h"
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size() == 1) return {  };

        
    }
private:
    vector<vector<int>> helper(int x, vector<int>& nums){
        if(nums.size() == 1) return { {x,nums[0]} };
    }
    
};
// @lc code=end

