/*
  Date : 30/12/2022
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/bitwise-and-of-numbers-range/description/
*/  


class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        
        // edge case if any of the number is zero . 0 & anything = 0

        if((m == 0) || (n == 0))
            return 0;

        // If there are different number of digit in binary - it will always zero

        if((int) log2(m) != (int) log2(n))
            return 0;

        int res = m;

        for(long i = m; i<=n; i++)
        {
            res &= i;
        }        

        return res;
    }
};
