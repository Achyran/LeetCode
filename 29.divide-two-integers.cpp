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


        if (dividend == INT_MIN && divisor == -1)
        return INT_MAX;

        bool negativ =  !isNegativ(dividend) != !isNegativ(divisor);

        //if(dividend == INT_MIN) dividend = -2147483647;
        //if(divisor == INT_MIN) divisor = -2147483647;

        long l_dividend = labs(dividend);
        long l_divisor = labs(divisor);
        

        long counter = 0;
        while(l_dividend>= l_divisor ){
            long k = 1;
            while(k*2 * l_divisor <= l_dividend)
                k*=2;
            l_dividend -= k * l_divisor;
            counter += k;
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

