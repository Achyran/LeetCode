/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
 */

// @lc code=start
//#include "headers.h"
/** *
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

        if(head == nullptr || head->next == nullptr) return head;
        ListNode* start = head;
        int amount = 1;
        
        while (head->next != nullptr)
        {
            amount ++;
            head = head->next;
        }
        head->next = start;
        
        k = k % amount;
        amount = amount -k;
        ListNode* prev;
        while (amount >= 0)
        {
            amount --;
            prev = head;
            head = head->next;
        }
        
        prev->next = nullptr;
        
        return head;
        

    }
};
// @lc code=end

