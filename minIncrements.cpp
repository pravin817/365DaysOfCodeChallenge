/*
  Day 15: 11/01/2023
  Platform : GFG
  Problem Link : https://practice.geeksforgeeks.org/problems/6e63df6d2ebdf6408a9b364128bb1123b5b13450/1
*/


class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N) {
        long long int ans = 0;
        
        sort(arr.begin(),arr.end());
        
        for(int i = 1; i<N;i++)
        {
            if(arr[i] <= arr[i-1])
            {
                int diff = arr[i-1] -arr[i];
                ans += diff+1;
                arr[i] += diff + 1;
            }
        }
        
        return ans;
    }
};

/*
  Analysis:
  Time Complexity : O(nlogn)
  Space Complexity : O(1)
*/  
