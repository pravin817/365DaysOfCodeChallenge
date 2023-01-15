/*
  Day 1: 15/01/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/monotonic-array/description/
*/

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool Increase = true;
        bool Decrease = true;

        for(int i = 0; i<nums.size()-1;i++)
        {
            if(nums[i] > nums[i+1])
                Increase = false;

            if(nums[i] < nums[i+1])
                Decrease = false;

            if(Increase == false && Decrease == false)
                return false;    
        }
        return true;
    }
};

/*
    Analysis:
    Time COmplexity : O(N)
    Space complexity: O(1)
*/
