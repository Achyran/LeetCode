/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
#include "headers.h"
class Solution {
public:
    void sortColors(vector<int>& nums) {
        if(nums.size() == 1) return;

        unordered_map<int,int> map;


        for (int i = 0; i < nums.size(); i++)
        {
            if(map.find(nums[i]) != map.end()){
                map[nums[i]]++;
            }else{
                map[nums[i]] = 1;
            }
        }
        int counter = 0;
        int currentCol = 0;
        while (counter < nums.size()){
            if(map[currentCol] == 0){
                currentCol ++;
            }else{

                nums[counter] = currentCol;
                counter ++;
                map[currentCol] --;
            }
        }

        

    }
};
// @lc code=end

