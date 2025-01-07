/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
#include "headers.h"

class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        
        string base;
        string add;

        if(a.length() > b.length()){
            base = a;
            add = b;
        }else{
            base = b;
            add = a;
        }

        


    }
};
// @lc code=end

