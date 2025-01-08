/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
//#include "headers.h";
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        if( rowIndex == 1) return {1};
        if( rowIndex == 2) return {1,1};

        vector<vector<int>> output = {{1},{1,1}};

        for (int i = 2; i < rowIndex+1; i++)
        {
            output.push_back({1});
            for (int j = 1; j < output[i-1].size(); j++)
            {
                output[i].push_back(output[i-1][j] + output[i-1][j-1]);
            }
            output[i].push_back(1);
            
        }
        
        return output[rowIndex];
    }
};
// @lc code=end

