/*
 * @lc app=leetcode id=224 lang=cpp
 *
 * [224] Basic Calculator
 */

// @lc code=start
#include"headers.h"
class Solution {
public:
    int calculate(string s) {
    int ans = 0;
    int num = 0;
    int sign = 1;

    stack<int> stack {{sign}};

    for(int i = 0; i < s.size(); i ++){
        switch (s[i])
        {
        case '(':
            stack.push(sign);
            break;
        case ')':
            stack.pop();
            break;
        case '+':
        case '-':
            ans += sign * num;
            break;
        default:
            if(isdigit(sign[i])){
                num = num * 10 + (sign[i] - '0');
            }
            break;
        }

    }


    }

    
};
// @lc code=end

