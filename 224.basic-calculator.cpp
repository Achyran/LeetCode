/*
 * @lc app=leetcode id=224 lang=cpp
 *
 * [224] Basic Calculator
 */

// @lc code=start
//#include"headers.h"
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
            sign = (s[i] == '+'? 1 : -1) * stack.top();
            num = 0;
            break;
        default:
            if(isdigit(s[i])){
                num = num * 10 + (s[i] - '0');
            }
            break;
        }


        }
    return ans + sign * num;
    }
};
// @lc code=end

