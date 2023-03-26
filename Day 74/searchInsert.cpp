/*
  Day 72: 24/03/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/search-insert-position/
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //As the array is sorted we can think about binary Search.

        int low = 0 ;
        int high = nums.size()-1;

        while(low<=high){
            // Find the mid

            int mid = low+(high-low)/2;

            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                high = mid - 1;
            else
                low = mid + 1;        
        }
        return low;
    }
};

/*
    Analysis:
    Time Complexity : O(logn)
    Space Complexity : O(1)
*/