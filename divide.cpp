/*
  Day 32: 28/01/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/divide-two-integers/description/
*/

class Solution {
public:
    int divide(int dividend, int divisor) {

        if(dividend == INT_MIN && divisor == 1)
            return INT_MIN;

        if(dividend == INT_MIN && divisor == -1)
            return INT_MAX;    

        long int dd = abs(dividend);
        long int dv = abs(divisor);

        int ans = 0;

        while(dv <= dd)
        {
            long int sum = dv, count = 1;

            while(sum <= dd-sum)
                {
                    sum+=sum;
                    count+=count;
                }
                ans +=count;
                dd -=sum;
        }

        if((dividend < 0) ^ (divisor < 0))
            ans = -ans;

        return ans;    
    }
};