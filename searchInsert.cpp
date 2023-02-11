/*
  Day 43: 11/02/2023
  Platform : leetcode
  Problem Link : https://leetcode.com/problems/search-insert-position/
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        // As the array is sorted we can apply the binary search

        int low = 0;
        int high = nums.size()-1;

        while(low < high)
        {
            // Now find the mid element

            int mid = low +(high - low)/2;

            if(nums[mid] >= target)
                high = mid;
            else
                low = mid + 1;
        }
        return nums[low] >= target ? low : low + 1;
    }
};

/*
    Analysis:
    Time Complexity : O(logn)
    Space Complexity : O(1)
*/    