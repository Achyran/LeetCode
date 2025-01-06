/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
//#include "headers.h"
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool wordStarted = false;

        for (int i = s.size(); i >= 0; i--)
        {
            if(wordStarted) count ++;

            if(!wordStarted && isalpha(s[i])) wordStarted = true;

            if(wordStarted && !isalpha(s[i])) break;
        }
        



        return count;


    }
};
// @lc code=end

