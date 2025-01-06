/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
//#include "headers.h"

class Solution {
public:
    bool isPalindrome(string s) {


        string cleaned = "";

        for (int i = 0; i < s.size(); i++)
        {
            if(isalnum(s[i])){
                cleaned += tolower(s[i]);
            }
        }
        
        
        if(cleaned.size() <= 1) return true;

        if(cleaned.size() == 2) return  tolower( cleaned[0]) == tolower( cleaned[1]);

        stack<char> sta;

        bool isOdd = cleaned.size() %2;

        bool stackup = true;

        for (int i = 0; i < cleaned.size()/2; i++)
        {
            if(isalnum(cleaned[i])){
                sta.push(cleaned[i]);
                cout << cleaned[i] << endl;
            }
        }

        int start = cleaned.size()/2;
        if(cleaned.size() % 2 ==1) start ++;

        for (int i = start ; i < cleaned.size(); i++)
        {
            if(sta.top() != cleaned[i]) return false;
            sta.pop();
        }
        
        
        
        return true;
    }
};
// @lc code=end

