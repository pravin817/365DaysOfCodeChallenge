/*
    Day 53: 23/02/2023
    Platform : Leetcode
    Link : https://leetcode.com/problems/maximum-subarray/description/
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // we can solve this problem effectively by using the kadan's algorithm

        int sum = 0;
        int maxi = INT_MIN;

        for(int i = 0;i<nums.size();i++)
        {
            sum +=nums[i];

            maxi = max(sum,maxi);

            if(sum < 0)
                sum = 0;
        }
        return maxi;
    }
};

/*
    Analaysis:
    Time Complexity : O(n)
    Space Complexity : O(1)
*/    

