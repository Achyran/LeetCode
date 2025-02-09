/*
 * @lc app=leetcode id=71 lang=cpp
 *
 * [71] Simplify Path
 */

// @lc code=start
//#include "headers.h"

class Solution {
public:
    string simplifyPath(string path) {
        
        vector<string> pathVector;
        string tempFileName = "";
        
        for (int i = 0; i < path.size(); i++)
        {
            if(path[i] == '/'){
                HandleFilename(pathVector, tempFileName);
                tempFileName = "";
            }else{
                tempFileName += path[i];
            }
        }
        
        if(tempFileName != "") 
            HandleFilename(pathVector, tempFileName);

        return FormatPath(pathVector);

        
    }
private:
    void HandleFilename(vector<string>& pathVector, string s){
        if(s == "..") {
            pathVector.pop_back();
        } 
        if(s != "." 
        && s != ""){
            pathVector.push_back(s);
        }
    }
    string FormatPath(vector<string>& pathVector){
        string output = "/";
        for (int i = 0; i < pathVector.size(); i++)
        {
            output += pathVector[i];
            output += "/";
        }
        output.pop_back();
        return output;
    }

};
// @lc code=end

