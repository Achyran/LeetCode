/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
 */

// @lc code=start
#include "headers.h"
/** */
 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
 /* */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* start = head;

        
        while (head->next != nullptr)
        {
            head = head->next;
        }
        head->next = start;
        

    }
};
// @lc code=end

