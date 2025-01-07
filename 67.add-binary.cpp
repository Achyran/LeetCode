/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
//#include "headers.h"

class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        
        int aCounter = a.length()-1;
        int bCounter = b.length()-1;
        bool biggerThanZero = false;
        
        string output = "";

        while (aCounter >=0 && bCounter >=0)
        {
            int temp = carry;
            if(bCounter >= 0 && b[bCounter] == '1') temp ++;
            if(aCounter >= 0 && a[aCounter] == '1') temp ++;

            switch (temp)
            {
            case 0:
                carry = 0;
                output = '0' + output ;
                break;
            case 1:
                carry = 0;
                output = '1' + output;
                biggerThanZero = true;
                break;
            case 2:
                carry = 1;
                output = '0' + output;
                biggerThanZero = true;
            case 3:
                carry =1;
                output = '1' + output;
                biggerThanZero = true;
                break;
            }
            bCounter--;
            aCounter--;
        }

        if(!biggerThanZero) return "";
        if(carry == 1){
            output = '1' + output;
        }

        
        return output;
    }
};
// @lc code=end

