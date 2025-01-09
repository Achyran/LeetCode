/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
 */

// @lc code=start

//  Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
#include "headers.h"
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* current = head;
        ListNode* next = head->next;
        ListNode* prev = nullptr;

        do {
            current->next = prev;
            prev = current;
            current = next;
            next = current->next;
            
        }
        while (next != nullptr);
        
        return current;
    }
};
// @lc code=end

