/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
#include "headers.h"
class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0){
                for(int j = i; j < nums.size()-1; j++){
                    nums[j] = nums[j +1];
                    nums[j+1] = 0;

                }
            }
        }
        
        
    }
};
// @lc code=end

