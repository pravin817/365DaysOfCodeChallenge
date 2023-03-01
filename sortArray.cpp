/*
  Day 57: 01/03/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/sort-an-array/description/
*/

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums;
    }
};

/*
    Analysis:
    Time Complexity : O(nlogn)
*/    

// By Applying the merge Sort 


class Solution {
public:

    void merge(vector<int>&nums, int low,int mid, int high)
    {
        int ln = mid - low +1;
        int rn = high - mid;

        vector<int>left(ln);
        vector<int>right(rn);

        // now Assign the values in the vectors

        int s = 0;

        for(int i = low; i<=mid;i++)
        {
            left[s++] = nums[i];
        }

        s = 0;

        for(int i = mid+1; i<=high;i++)
        {
            right[s++] = nums[i];
        }

        int ls = 0, rs = 0, ms = low;

        while(ls < ln && rs < rn)
        {
            if(left[ls]<right[rs])
            {
                nums[ms++] = left[ls++];
            }
            else
            {
                nums[ms++] = right[rs++];
            }
        }

        while(ls < ln)
        {
            nums[ms++] = left[ls++];
        }

        while(rs < rn)
        {
            nums[ms++] = right[rs++];
        }
    }

    void mergeSort(vector<int>&nums,int low, int high)
    {
        if(low < high)
        {
            int mid = (low + high)/2;

            mergeSort(nums,low, mid);
            mergeSort(nums,mid+1,high);
            merge(nums,low,mid,high);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size()-1;
        mergeSort(nums,0,n);
        return nums;
    }
};