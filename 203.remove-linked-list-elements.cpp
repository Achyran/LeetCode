/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
 */

// @lc code=start
//#include "headers.h"
/* *
 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 /**/
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head == nullptr) return nullptr;
        ListNode* start = head;
        ListNode* prev = head;

        while (head != nullptr)
        {
            if (head->val == val){
                prev->next = head->next;
            }
            head = head->next;

        }
        


        return start;
        
    }
};
// @lc code=end

