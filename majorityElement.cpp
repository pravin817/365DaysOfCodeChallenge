/*
  Day 22: 18/01/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/majority-element/description/
*/


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;

        for(int i= 0; i<nums.size();i++)
        {
            mp[nums[i]]++;
        }

        int maxi = INT_MIN;
        int ans = 0;

        for(auto x:mp)
        {
            if(x.second > maxi)
            {
                maxi = x.second;
                ans = x.first;
            }
        }
        return ans;
    }
};

/*
    Analysis:
    Time Complexity :O(n)
    Space Complexity : O(n)
*/    
