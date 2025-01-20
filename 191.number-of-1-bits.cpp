/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */

// @lc code=start
//#include "headers.h"
class Solution {
public:
    int hammingWeight(int n) {
        int res = 0;
        uint32_t temp = 0;

        for (int i = 0; i < 32; i++)
        {
            temp <<= 1;
            temp |= n & 1;
            if(temp == 1) res ++;
            temp = 0;
            n >>= 1;
        }
        
        return res;
    }
};
// @lc code=end

