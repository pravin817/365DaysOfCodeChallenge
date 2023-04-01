/*
  Day 79: 01/04/2023
  Platform : leetcode
  Problem Link : https://leetcode.com/problems/form-smallest-number-from-two-digit-arrays/description/
*/


class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v(10);
        
        for(int i = 0;i<nums1.size();i++){
            v[nums1[i]]++;
        }
        
        for(int i = 0;i<nums2.size();i++){
            v[nums2[i]]++;
        }
        
        int min1 = *min_element(nums1.begin(),nums1.end());
        int min2 = *min_element(nums2.begin(),nums2.end());
        
        for(int i = 1; i<=9;i++)
        {
            if(v[i] == 2)
                return i;
        }
        
        if(min1>min2)
            swap(min1,min2);
        
        return min1*10 + min2;
    }
};

/*
    Anlysis:
    Time Complexity : O(n)
    Space Complexity : O(n)
*/