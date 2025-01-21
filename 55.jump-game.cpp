/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
//#include "headers.h"
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int gool = nums.size()-1;

        for (int i = nums.size() -1; i >= 0; i--)
        {
            if(i + nums[i] >= gool){
                gool = i;
            }
        }

        return gool == 0;
        
    }
};
// @lc code=end

