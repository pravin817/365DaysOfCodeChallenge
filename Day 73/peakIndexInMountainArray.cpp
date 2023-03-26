/*
  Day 71: 23/03/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/peak-index-in-a-mountain-array/description/
*/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // Let's try !!!!!

        int low = 0;
        int high = arr.size()-1;
        int mid = low+(high-low)/2;

        while(low<high){
            // Find the mid 

            if(arr[mid] < arr[mid+1]){
                low = mid+1;
            }
            else{
                high = mid;
            }
            mid = low+(high-low)/2;

        }
        return low;
    }
};

/*
    Analysis:
    Time Complexity : O(logn)
    Space Complexity : O(1)
*/    