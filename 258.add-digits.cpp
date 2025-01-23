/*
 * @lc app=leetcode id=258 lang=cpp
 *
 * [258] Add Digits
 */

// @lc code=start
class Solution {
public:
    int addDigits(int num) {
        
        if(num < 10) return num;
        int amount = 0;
        while (num > 0)
        {
            amount += num % 10;
            num = num/10;
        }
        return addDigits(amount);
    }
};
// @lc code=end

