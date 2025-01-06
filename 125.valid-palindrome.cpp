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


        string cleaned = "";

        for (int i = 0; i < s.size(); i++)
        {
            if(isalnum(s[i])){
                cleaned += tolower( s[i]);
            }
        }
        
        if(cleaned.size() <= 1) return true;

        if(cleaned.size() == 2) return  tolower( s[0]) == tolower( s[1]);

        stack<char> sta;

        bool isOdd = cleaned.size() %2;

        bool stackup = true;

        for (int i = 0; i <= cleaned.size()/2; i++)
        {
            if(isalnum(cleaned[i])){
                sta.push(cleaned[i]);
                cout << cleaned[i] << endl;
            }
        }

        if(cleaned.size() % 2 ==1) sta.pop();

        for (int i = cleaned.size()/2 +1; i < cleaned.size(); i++)
        {
            if(sta.top() != cleaned[i]) return false;
            sta.pop();
        }
        
        
        
        return true;
    }
};
// @lc code=end

