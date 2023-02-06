/*
  Day 39: 06/02/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/shuffle-the-array/submissions/892779664/
*/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        // We have given the array and the number n

        // Step - 1 : Create the vector

        vector<int> ans;

        // Step - 2 : Iterate through the array and update the vector array

        for(int i = 0; i< n;i++)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[n+i]);
        }

        return ans;
    }
};


/*
    Analysis:
    Time Complexity: O(n)
    Space Complexity : O(n) ---> Auxillary
*/    