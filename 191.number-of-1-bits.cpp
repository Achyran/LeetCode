/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */

// @lc code=start
#include "headers.h"
class Solution {
public:
    int hammingWeight(int n) {
        int res = 0;
        
        for (int i = 0; i < 32; i++)
        {
            res <<= 1;
            res |= n & 1;
            n >>= 1;
            n >>= 1;
        }
        
    }
};
// @lc code=end

