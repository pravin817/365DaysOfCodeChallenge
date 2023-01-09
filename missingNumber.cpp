/*
  Day 13: 09/01/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/missing-number/description/


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int sum = n*(n+1)/2;

        for(int i = 0; i<nums.size();i++)
        {
            sum -=nums[i];
        }
        return sum;
    }
};

/* 
    Analysis:
    Time Complexity: O(n)
    Space Complexity:O(1)
*/    
