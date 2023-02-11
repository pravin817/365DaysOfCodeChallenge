/*
  Day 43: 11/02/2023
  Platform : leetcode
  Problem Link : https://leetcode.com/problems/search-insert-position/
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // By using the linear search

        int n = nums.size();
        for(int i = 0; i<n;i++)
        {
            if(nums[i]>=target)
                return i;
        }
        return n;
    }
};

/*
    Analysis:
    Time Complexity : O(n)
    Space complexity : O(1)
*/    


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // As the array is sorted we can apply the binary search
        // Let's apply the binary search

        int low = 0;
        int high = nums.size()-1;

        while(low <= high)
        {
            // find the mid

            int mid = low + (high - low)/2;

            // if the target element is present at the mid position

            if(nums[mid] == target)
                return mid;

            if(nums[mid]<target)
                low = mid + 1;
            else
                high = mid - 1;        
        }

        // If the element is not present then the position of the element will be at low hence return low
        return low;
    }
};

/*
    Analysis:
    Time Complexity: O(logn)
    Space Complexity : O(1)
*/    