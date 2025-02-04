/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
//#include "headers.h"
class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int left = 0;
        int right = 0;
        
        while (left < nums.size())
        {
            if(nums[right] != 0){
                right++;
            }else{
                while (nums[left] != 0)
                {
                    cout<<left<<endl;
                    left ++;
                }
                nums[right] = nums[left];
                nums[left] = 0;
            }
        }
        
        
    }
};
// @lc code=end

