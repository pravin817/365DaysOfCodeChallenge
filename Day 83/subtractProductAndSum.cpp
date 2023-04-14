/*
  Day 83: 05/04/2023
  Platform : leetcode
  Problem Link : https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/
*/

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int pro = 1;
        int ans = 0;
        while(n){
            int lastDigit = n % 10;
            sum+=lastDigit;
            pro*=lastDigit;

            // Update the number

            n/=10;
        }

        ans = pro - sum;
        return ans;
    }
};

/*
    Analysis:
    TIme Complexity : O(n)
    Space Complexity : O(1)
*/