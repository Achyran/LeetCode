/*
 * @lc app=leetcode id=345 lang=cpp
 *
 * [345] Reverse Vowels of a String
 */

// @lc code=start
#include "headers.h"
class Solution {
public:
    string reverseVowels(string s) {
        int right = 0;
        int left = s.size() -1;

        while (right >= left)
        {
            
        }
        
    }
private:
    bool IsVowel(char n){
        
        switch (n)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return true;
        }
        return false;
    }
};

// @lc code=end

