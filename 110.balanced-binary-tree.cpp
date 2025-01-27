/*
 * @lc app=leetcode id=110 lang=cpp
 *
 * [110] Balanced Binary Tree
 */

// @lc code=start
//#include "headers.h"
/**
 //Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
/**/
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return getHeight(root) != -1;
    }
private:
    int getHeight(TreeNode* root){
        if(root = nullptr) return 0;

        int left = getHeight(root->left);
        int right = getHeight(root->right);

        if(left == -1 || right == -1 || abs(left- right) > 1) return -1;

        return max(left,right) + 1;
    }
};
// @lc code=end

