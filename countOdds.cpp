/*
  Day 45: 13/02/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/description/
*/


class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;

        for(int i = low; i<= high;i++)
        {
            if(i%2 != 0)
                count++;
        }
        return count;
    }
};

class Solution {
public:
    int countOdds(int low, int high) {
        return ( (high + 1)/2 - (low/2));
    }
};

/*
    Analysis:
    Time Complexity : O(1)
    Space Complexity : O(1)
*/    