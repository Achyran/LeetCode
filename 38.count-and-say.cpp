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
        
        if(n == 1) return "1";

        return REL(countAndSay(n-1));
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
                output = output + to_string(count) + cur ;
                cur = n[i];
                count = 1;
            }
        }
        cout <<count;
        output = output + to_string(count) + cur ;
        return output;
    }

};
// @lc code=end

