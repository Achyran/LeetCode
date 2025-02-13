/*
 * @lc app=leetcode id=29 lang=cpp
 *
 * [29] Divide Two Integers
 */

// @lc code=start
//#include "headers.h"
class Solution {
public:
    int divide(int dividend, int divisor) {

        bool negativ =  !isNegativ(dividend) != !isNegativ(divisor);

        dividend = abs(dividend);
        divisor = abs(divisor);
        

        int counter = 0;
        while(dividend>= divisor ){
            dividend -= divisor;
            counter ++;
        }
        return negativ? counter *-1 :counter;
    }

private:
    bool isNegativ(int numb){
        numb = numb >> 31;
        return numb;
    }
};
// @lc code=end

