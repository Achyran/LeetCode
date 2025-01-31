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
            if(IsVowel( s[right]) && IsVowel(s[left]) ){
                //Switch and progress ponters;
                char temp = s[right];
                s[right] = s[left];
                s[left] = temp;
                right ++;
                left --;
            }
            else {
                if(!IsVowel(s[right])){
                    right ++;
                }
                if(!IsVowel(s[left])){
                    left ++;
                }
            }

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

