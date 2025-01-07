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

        for (int i = base.length()-1; i <= base.length()-add.length(); i--)
        {
            int temp = carry;
            if(base[i] == '1') temp ++;
            if(add[i] == '1') temp ++;

            switch (temp)
            {
            case 0:
                base[i] = '0';
                break;
            case 1:
                base[i] = '1';
                break;
            case 2:
                carry = 1;
                base[i] = '1';
            case 3:
                carry =1;
                base[i] = '1';
                break;
            }

        }

        if(base.length() == add.length && carry == 1){
            base = '1' + base;
        }

        return base;
    }
};
// @lc code=end

