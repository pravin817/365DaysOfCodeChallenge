/*
  Day 22: 18/01/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/majority-element/description/
*/


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();

        int majorityElementIndex = floor(len/2);

        // Now sort the array

        sort(nums.begin(),nums.end());

        // now return the middle element as per defination the majorityElement occurs more than floor value of(len/2)

        return nums[majorityElementIndex];
    }
};

/*
    Analysis:
    Time Complexity : O(nlogn)
    Space Complexity : O(1)
*/    



// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         map<int,int>mp;

//         for(int i= 0; i<nums.size();i++)
//         {
//             mp[nums[i]]++;
//         }

//         int maxi = INT_MIN;
//         int ans = 0;

//         for(auto x:mp)
//         {
//             if(x.second > maxi)
//             {
//                 maxi = x.second;
//                 ans = x.first;
//             }
//         }
//         return ans;
//     }
// };

/*
    Analysis:
    Time Complexity :O(n)
    Space Complexity : O(n)
*/    
