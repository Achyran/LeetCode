/*
 * @lc app=leetcode id=29 lang=cpp
 *
 * [29] Divide Two Integers
 */

// @lc code=start
#include "headers.h"
class Solution {
public:
    int divide(int dividend, int divisor) {
        int counter = 0;
        while(dividend> divisor ){
            dividend -= divisor;
            counter ++;
        }
        return counter;
    }
};
// @lc code=end

