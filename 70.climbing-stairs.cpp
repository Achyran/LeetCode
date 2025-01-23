/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
//#include "headers.h"
class Solution {
public:
    int climbStairs(int n) {

        int one = 1;
        int two = 1;

        for (int i = n-1; i > 0; i--)
        {
            int temp = one;
            one = one + two;
            two = temp;
        }
        

        return one;
    }
};
// @lc code=end

