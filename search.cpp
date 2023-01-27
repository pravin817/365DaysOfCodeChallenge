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


// Binary Search

class Solution {
public:
    int search(vector<int>& nums, int target) {
        // As the array is sorted we can apply the binary search

        int low = 0;
        int high = nums.size()-1;

        while(low <= high)
        {
            int mid = low+(high - low)/2;

            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                high = mid - 1;
            else
                low =  mid + 1;        
        }
        return -1;
    }
};


/*
    Analysis:
    Time complexity: O(logn)
    Space complexity: O(1)
*/    