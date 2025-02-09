/*
 * @lc app=leetcode id=71 lang=cpp
 *
 * [71] Simplify Path
 */

// @lc code=start
#include "headers.h"

struct LinkedNode
{
    public:
        int data;
        LinkedNode* next;
        LinkedNode* prev;
};


class Solution {
public:
    string simplifyPath(string path) {
        
        LinkedNode* start;
        LinkedNode* head;

        string tempFileName = "";
        
        for (int i = 0; i < path.size(); i++)
        {
            if(path[i] == '/'){
                if(tempFileName == "..") ;
                if(tempFileName != "." 
                || tempFileName != "") ;
                tempFileName = "";
            }else{
                tempFileName += path[i];
            }
        }


        
    }
};
// @lc code=end

