/*
 * @lc app=leetcode id=38 lang=cpp
 *
 * [38] Count and Say
 */

// @lc code=start
#include "headers.h"
class Solution {
public:
    string countAndSay(int n) {
        
        if(n = 1) return "1";

        return "test ";
    }
private:
    string REL(string n){
        if(n == "") return "";

        char cur = n[0];
        int count = 1;
        string output = "";

        for (int i = 0; i < n.size(); i++)
        {
            if(cur == n[i]){
                count ++;
            }else{
                output = output + (char) count + cur ;
                cur = n[i];
                coutn = 1;
            }
        }
        


    }

};
// @lc code=end

