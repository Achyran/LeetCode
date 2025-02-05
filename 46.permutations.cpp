/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */

// @lc code=start
//#include "headers.h"
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size() <= 1) return { nums };

        vector<vector<int>> output;
        for(int i =0; i < nums.size(); i++){
            vector<int> reduced(nums.begin(), nums.end());
            reduced.erase(reduced.begin() + i);
            vector<vector<int>> res = permute(reduced);
            
            for(int j = 0; j < res.size();j++){
                vector<int> v = res[j];
                v.insert(v.begin(),nums[i]);
                output.push_back(v);
            }
        }

        return output;

        
    }
 
    
};
// @lc code=end

