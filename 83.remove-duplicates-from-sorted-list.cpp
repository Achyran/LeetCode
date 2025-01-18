/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
 */

// @lc code=start
/**/ 
  //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 /**/
 #include "headers.h"
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        unordered_map<int,int> map;
        ListNode* output;
        while (head->next != nullptr)
        {
            ListNode* current = head;
            if(map.find(head->val) != map.end()){
                map[head->val] = 1;
            }
            else{

                //Remove Element
            }
        }
        
        


        return output;
    }
};
// @lc code=end

