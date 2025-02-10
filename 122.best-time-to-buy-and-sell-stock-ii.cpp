/*
 * @lc app=leetcode id=122 lang=cpp
 *
 * [122] Best Time to Buy and Sell Stock II
 */

// @lc code=start
#include "headers.h"
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0 ) return 0;
        int profit = 0;
        int buyprice = prices[0];
        bool isHolding = false;
        for (int i = 1; i < prices.size()-1; i++)
        {
            if(isHolding && prices[i +1] > buyprice){
                //Sell
            }
        }
        
        
    }
};
// @lc code=end

