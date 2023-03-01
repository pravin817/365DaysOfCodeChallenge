/*
  Day 57: 01/03/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/sort-an-array/description/
*/

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums;
    }
};

/*
    Analysis:
    Time Complexity : O(nlogn)
*/    