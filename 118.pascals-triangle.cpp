/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
//#include "headers.h"
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        if( numRows == 1) return {{1}};
        if( numRows == 2) return {{1},{1,1}};

        vector<vector<int>> output = {{1},{1,1}};

        for (int i = 2; i < numRows; i++)
        {
            output.push_back({1});
            for (int j = 1; j < output[i-1].size(); j++)
            {
                output[i].push_back(output[i-1][j] + output[i-1][j-1]);
            }
            output[i].push_back(1);
            
        }
        
        return output;

    }
};
// @lc code=end

