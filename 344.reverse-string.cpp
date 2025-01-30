/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */

// @lc code=start
//#include "headers.h"
class Solution {
public:
    void reverseString(vector<char>& s) {
        
        for (int i = 0; i < s.size()/2; i++)
        {
            char first = s[i];
            char last = s[s.size()-1 - i];
            s[i] = last;
            s[s.size() -1 -i] = first;
        }

        
    }
};
// @lc code=end

