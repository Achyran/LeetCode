/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1;
        
        if(n > 0 ){
            for (int i = 0; i < n; i++)
            {
                cout << x<< endl;
                x =x * x;
            }
            return x;
        }

        return 0;
    }
};
// @lc code=end

