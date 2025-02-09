/*
 * @lc app=leetcode id=71 lang=cpp
 *
 * [71] Simplify Path
 */

// @lc code=start
#include "headers.h"
class Solution {
public:
    string simplifyPath(string path) {
        stack<string> stack;
        string tempFileName = "";
        
        for (int i = 0; i < path.size(); i++)
        {
            if(path[i] == '/'){
                if(tempFileName == "..") stack.pop();
                if(tempFileName != "." 
                || tempFileName != "") stack.push(tempFileName);
                tempFileName = "";
            }else{
                tempFileName += path[i];
            }
        }

        
        
    }
};
// @lc code=end

