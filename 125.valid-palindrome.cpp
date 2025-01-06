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

        if(s.size() >= 1) return true;

        string cleaned = "";

        for (int i = 0; i < s.size(); i++)
        {
            if(isalnum(s[i])){
                cleaned += tolower( s[i]);
            }
        }
        
        


        stack<char> sta;

        bool isOdd = cleaned.size() %2;

        bool stackup = true;

        for (int i = 0; i < cleaned.size()/2; i++)
        {
            if(isalnum(cleaned[i])){
                sta.push(cleaned[i]);
            }
        }

        int start = (cleaned.size() % 2) ? cleaned.size()/2+1:cleaned.size();

        for (int i = start +1; i < cleaned.size(); i++)
        {
            if(sta.top() != cleaned[i]) return false;
            sta.pop();
        }
        
        
        
        return true;
    }
};
// @lc code=end

