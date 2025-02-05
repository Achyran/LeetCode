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
        if(nums.size() == 1) return { nums };

        vector<vector<int>> output;
        for(int i =0; i < nums.size(); i++){
            vector<int> redusced = removeX(nums[i],nums);
            vector<vector<int>> permute = helper(nums[i],nums);
            Combine(output,permute);
        }

        return output;

        
    }
private:
    vector<vector<int>> helper(int x, vector<int>& nums){
        if(nums.size() == 1) return { {x,nums[0]} };

        vector<vector<int>> output;
        for(int i = 0; i < nums.size(); i++){
            vector<int> redusced = removeX(nums[i],nums);
            vector<vector<int>> permute = helper(nums[i],nums);
            Combine(output, permute);
        }
        return output;
    }

    vector<int> removeX (int x ,vector<int>& nums){
        vector<int> output;
        for(int i = 0; i < nums.size(); i++){
            if(nums[x] != x) output.push_back(nums[i]);
        }
        return output;
    }

    vector<vector<int>>& Combine(vector<vector<int>>& a, vector<vector<int>>& b)
    {
        for(int j = 0; j < b.size(); j ++)
        {
            a.push_back(b[j]);
        }

        return a;
    }
    
};
// @lc code=end

