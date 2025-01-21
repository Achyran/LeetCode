/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n <= 0 ) return false;

        int res = 0;
        for (int i = 0; i < 32; i++)
        {
            if(n & 1) res++;
            if(res == 2) return false;
            n >>= 1;
        }
        return true;
        
    }
};
// @lc code=end

