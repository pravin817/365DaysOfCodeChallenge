/*
  Day 60: 06/03/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/kth-missing-positive-number/description/
*/


class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       int n = arr.size();
       int low = 0;
       int high = n-1;

       int missing = compute(arr[n-1],n);

    while(low <= high)
    {
        int mid = low + (high - low)/2;

        missing = compute(arr[mid],mid+1);

        if(missing >= k)
            high = mid - 1;
        else
            low = mid + 1;    
    }

    if(high == -1)
        return k;

    return arr[high]+k-compute(arr[high],high+1);    
    }

    int compute(int actual,int expected)
    {
        return actual - expected;
    }
};

/*
    Anlaysis:
    Time Complexity : O(logn)
    Space Complexity : O(1)
*/    