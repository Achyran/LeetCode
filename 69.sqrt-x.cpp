/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
//#include "headers.h"
class Solution {
public:
    int mySqrt(int x) {
        
        if(x == 0) return 0;

        unsigned int lowerBound = 0;
        unsigned int upperBound = x;
        unsigned int output = 1;

        while (lowerBound <= upperBound)
        {
            unsigned int cur = lowerBound + ((upperBound-lowerBound)/2);
            
            cout << cur << endl;

            if(cur > x/cur){
                upperBound = cur-1;
            }else if ( cur < x/cur){
                lowerBound = cur +1;
                output = cur;
            }else return cur;
        }
        

        return output;
    }
};
// @lc code=end

