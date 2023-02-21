/*
  Day 52: 21/02/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/single-element-in-a-sorted-array/description/
*/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i< nums.size();i++)
        {
            ans = ans ^nums[i];
        }
        return ans;
    }
};

/*
    Anlaysis:
    Time COmplexity : O(n)
    Space Complexity : O(1)
*/    