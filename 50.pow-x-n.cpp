/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double myPow(double x, int n) {
        
        bool negativ = isNegativ(n);
        n = abs(n);
        if (x == 0) return 0;
        if (n == 0) return 1;

        return negativ? 1/ powRec(x,n): powRec(x,n);
        
     
        
    }
private:

    double powRec(double x,int n){
        
        if(n == 0) return 1;
        if (x == 0) return 0;

        double res = powRec(x,n/2);
        res = res * res;
        return n%2 == 1? x * res: res;
    }

    bool isNegativ(int numb){
        numb = numb >> 31;
        return numb;
    }
};
// @lc code=end

