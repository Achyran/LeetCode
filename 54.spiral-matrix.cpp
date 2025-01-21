/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */

// @lc code=start
#include "headers.h"
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int left = 0;
        int right = matrix[0].size()-1;
        int top = 0;
        int bottom = matrix.size()-1;
        vector<int> result;

        while (left < right && top < bottom)
        {
            for (int i = left ; i < right ; i++)
            {
                result.push_back(matrix[top][i]);
            }
            top ++;
            for (int i = top; i < bottom; i++)
            {
                result.push_back(matrix[i][right]);
            }
            right --;

            for(int i = right; i >= left; i --){
                result.push_back(matrix[bottom][i]);
            }
            bottom ++;

            for(int i = bottom; i >= top; i --){
                result.push_back(matrix[i][left]);
            }
            
            
            
            
            
        }
        

    }
};
// @lc code=end

