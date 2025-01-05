/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
//#include "headers.h"
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int amount = 0;
        for (int i = 0; i < digits.size(); i++)
        {
            amount += digits[i] * pow(10 ,(digits.size()-i)-1);
        }

        amount ++;

        vector<int> output;
        

        while (amount >0)
        {
            int mod = amount %10;
            output.emplace(output.begin(),mod);
            amount = amount/10;
        }
        

        return output;
        
        

    }
};
// @lc code=end

