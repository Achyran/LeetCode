/*
 * @lc app=leetcode id=104 lang=cpp
 *
 * [104] Maximum Depth of Binary Tree
 */

// @lc code=start
/* *
//  Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 /**/

//#include "headers.h"
class Solution {
public:
    int maxDepth(TreeNode* root) {
        
        cout << root->val << endl;

        if(root->left == nullptr && root->right == nullptr) return 1;

        int cLeft = 0;
        int cRight = 0;


        if(root->left != nullptr) cLeft =+ maxDepth(root->left);
        if(root->right != nullptr) cRight =+ maxDepth(root->right);

        

        return cLeft > cRight ? cLeft : cRight;


    }
};
// @lc code=end

