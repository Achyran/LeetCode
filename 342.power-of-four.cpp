/*
 * @lc app=leetcode id=342 lang=cpp
 *
 * [342] Power of Four
 */

// @lc code=start
#include "headers.h"
class Solution {
public:
    bool isPowerOfFour(int n) {
        
        while (n >= 4)
        {
            if(n%4 != 0) return false;
        }
        
    }
};
// @lc code=end

