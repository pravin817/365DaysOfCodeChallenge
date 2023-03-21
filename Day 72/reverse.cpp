/*
  Day 72: 21/03/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/reverse-integer/description/
*/


class Solution {
public:
    int reverse(int x) {
        long long rev = 0;

        while(x!=0)
        {
            int rem = x % 10 ;
            rev = rev *10+ rem;
            x = x / 10;
        }    

        return (rev > INT_MAX || rev < INT_MIN) ? 0:rev; 
    }
};