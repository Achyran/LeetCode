/*
 * @lc app=leetcode id=326 lang=cpp
 *
 * [326] Power of Three
 */

// @lc code=start
//#include "headers.h"
class Solution {
public:
    bool isPowerOfThree(int n) {

        while (n >=3)
        {
            if(n%1 != 0) return false;
            n = n/3;
        }
        return n ==1;
        
    }
};
// @lc code=end

