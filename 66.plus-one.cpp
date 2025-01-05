/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
#include "headers.h"
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int amount = 0;
        for (int i = 0; i < digits.size(); i++)
        {
            amount += digits[i] * (10 * (digits.size()-i));
        }
        
        return {amount};
        
        

    }
};
// @lc code=end

