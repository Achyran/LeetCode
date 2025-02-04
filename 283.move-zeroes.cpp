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

        int left = 0;
        
        while (nums[left] == 0)
        {
            left++;
            if(left < nums.size()) return;
        }
        

        for (int right = 0; right < nums.size(); right++)
        {
            if(nums[right] == 0){
                nums[right] = nums[left];
                nums[left] = 0;

                while (nums[left] == 0)
                {
                    left++;
                    if(left < nums.size()) return;
                }
            }
        }
        
        
    }
};
// @lc code=end

