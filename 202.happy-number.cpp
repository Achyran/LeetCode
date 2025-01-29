/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start

#include "headers.h"
class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> map;

        return isHappyHelper(n,map)
        
    }

private:
    bool isHappyHelper(int n, unordered_map<int,int>* map){
        if(n == 1) return true;
        if(map->find(n) != map->end()) return false;
        int m = 0;
        while (n > 0)
        {
            int a = n%10;
            m += a * a;
            n = n/10;
        }

        return isHappyHelper(n,map);
    }


};
// @lc code=end

