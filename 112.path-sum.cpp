/*
 * @lc app=leetcode id=112 lang=cpp
 *
 * [112] Path Sum
 */

// @lc code=start
/**/
 // Definition for a binary tree node.
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(root == nullptr) return false;

        return dfsHasPathSum(root, targetSum);
        
    }

private: 
    bool dfsHasPathSum(TreeNode* root, int targetSum) {
        
        if(root.left == nullptr && root){
            if(targetSum == 0 )
                return true;
            else 
                return false;
        } 

        return dfsHasPathSum(root->left,targetSum - root->val) || dfsHasPathSum(root->right, targetSum - root->val);
    }

};
// @lc code=end

