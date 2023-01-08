/*
  Day 12: 08/01/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/description/
*/

class Solution {
public:
    int maximumCount(vector<int>& nums) {
       int pos = 0, neg = 0;

    for(int i = 0; i<nums.size(); i++)
    {
        if(nums[i] > 0)
            pos++;
        if(nums[i] < 0)
            neg++;    
    }

    return max(pos,neg);
    }
};

/* 
  Analysis:
  Time Complexity : O(n)
  Space Complexity : O(1)
*/  
