/*
  Day 41: 08/02/2023
  Platform : leetcode
  Problem Link : https://leetcode.com/problems/sum-of-all-odd-length-subarrays/description/
*/

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        // Create the prefix sum array

        int len = arr.size();

        int prefix[len];

        prefix[0] = arr[0];

        for(int i = 1; i < len ;i++)
        {
            prefix[i] = prefix[i-1] + arr[i];
        }

        int sum = 0;

        for(int i = 0; i < len; i++)
        {
            for(int j = 0 ; i+j < len ; j+=2)
            {
                int l = i, r = i+j;
                int a = i - 1 > -1 ? prefix[l-1] : 0;
                int b = prefix[r];
                sum += (b-a);
            }
        }

        return sum;
    }
};