/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
#include "headers.h"

class Solution {
public:
    bool isPalindrome(string s) {
        stack<char> sta;

        bool isOdd = s.size() %2;

        bool stackup = true;

        for (int i = 0; i < s.size()/2; i++)
        {
            if(isalnum(s[i])){
                sta.push( tolower(s[i]));
            }
        }

        int start = (s.size() % 2) ? s.size()/2+1:s.size();

        for (int i = start +1; i < s.size(); i++)
        {
            if(sta.top() != tolower(s[i])) return false;
            sta.pop();
        }
        
        
        
        return true;
    }
};
// @lc code=end

