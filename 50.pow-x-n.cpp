/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double myPow(double x, int n) {

        
     
        return Pow(x,n);
    }
private:
    double Pow(double x, int n){
        if (x == 0) return 0;
        if (n == 0) return 1;

        double res = Pow(x,n/2);
        cout << n << endl;
        res = res * res;
        if(n/2 == 0){
            return res;
        }else{
            return x * res;
        }
    }
};
// @lc code=end

