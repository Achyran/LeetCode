/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
 */

// @lc code=start
/**
  //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 /**/
 //#include "headers.h"
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head->next == nullptr) return head;
        
        ListNode* output = head;

        while (head->next != nullptr)
        {
           if(head->val == head->next->val){
                ListNode* start = head;
                while (head->val == head->next->val)
                {
                    head = head->next;
                }
                start->next = head->next;
                head = start;
           }
        }
        
        return output;
    }
};
// @lc code=end

