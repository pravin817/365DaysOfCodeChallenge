/*
  Day 13: 09/01/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/missing-number/description/


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int sum = n*(n+1)/2;

        for(int i = 0; i<nums.size();i++)
        {
            sum -=nums[i];
        }
        return sum;
    }
};

/* 
    Analysis:
    Time Complexity: O(n)
    Space Complexity:O(1)
*/    


/* ******************************* Second Solution ****************************** */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // bit masking

        int n = nums.size();
        int ans = n, mask = 0; 

        for(int i = 0; i<n;i++)
        {
            ans ^= nums[i];
            mask ^=i;
        }

        return ans^mask;
    }
};

/*
    Analysis:
    Time Complexity: O(n)
    Space Complexity:O(1)
*/    


/* ****************************** Third Solution ************************************** */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
         int len = nums.size();
         sort(nums.begin(),nums.end());

         int ans = len;
         for(int i = 0; i<len ;i++)
         {
             if(nums[i] != i)
             {
                 ans = i;
                 break;
             }
         }
         return ans;
    }
};

/* 
    Analysis:
    Time Complexity: O(n)
    Space Complexity:O(1)
*/    



//////////////////////////////////////////////////////////   II Question ///////////////////////////////////////////////

https://leetcode.com/problems/binary-tree-preorder-traversal/description/
