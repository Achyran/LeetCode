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

        if(n == 1) return 1;
        if(n == 2) return 2;

        int steps[n];
        steps[n-1] = 1;
        steps[n-2] = 1;

        for (int i = n-3; i >= 0; i--)
        {
            steps[i] = step[i +1] + steps[i+2];
        }
        

        return steps[0];
    }
};
// @lc code=end

