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
        
        vector<string> pathVector;

        string tempFileName = "";
        
        for (int i = 0; i < path.size(); i++)
        {
            if(path[i] == '/'){
                if(tempFileName == "..") {
                    pathVector.erase(pathVector.begin(), pathVector.begin() + pathVector.size()-1);
                } 
                if(tempFileName != "." 
                || tempFileName != ""){
                    pathVector.push_back(tempFileName);
                }
                tempFileName = "";
            }else{
                tempFileName += path[i];
            }
        }
        if(tempFileName != "");

        
    }

};
// @lc code=end

