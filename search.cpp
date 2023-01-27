/*
  Day 31: 27/01/2023
  Platform : leetcode
  Problem Link : https://leetcode.com/problems/binary-search/description/
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        for(int i = 0; i< nums.size();i++)
        {
            if(nums[i] == target)
                return i;
        }
        return -1;
    }
};

/*
    By applying the linear search
    Analysis:
    Time Complexity:O(n)
    Space Complexity: O(1)
*/    
