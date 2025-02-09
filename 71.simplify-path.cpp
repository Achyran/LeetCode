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

class ManagedList
{
public:
    LinkedNode* start;
    LinkedNode* head;
    ManagedList(LinkedNode* pStart);
    ~ManagedList();
    void Push();
    void Pop();

};




ManagedList::ManagedList(LinkedNode* pStart)
{
    start = pStart;
    head = start;
}

void ManagedList::Push(){
    
}

ManagedList::~ManagedList()
{
}




class Solution {
public:
    string simplifyPath(string path) {
        
        LinkedNode* start = nullptr;
        LinkedNode* head = nullptr;

        string tempFileName = "";
        
        for (int i = 0; i < path.size(); i++)
        {
            if(path[i] == '/'){
                if(tempFileName == "..") {
                    
                } 
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

