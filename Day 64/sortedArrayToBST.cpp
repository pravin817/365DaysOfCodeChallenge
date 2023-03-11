/*
  Day 64: 11/03/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/
*/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 
class Solution {
public:

    TreeNode *BST(vector<int>nums,int left,int right)
    {
        // Check for the base condition 

        if(left > right)
            return NULL;

        // Find the mid

        int mid = left+(right-left)/2;

        // Create the TreeNode

        TreeNode *temp = new TreeNode(nums[mid]);
        temp->left = BST(nums,left,mid-1);
        temp->right = BST(nums,mid+1, right);
        return temp;    
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;

        return BST(nums,left,right);
    }
};


/*
    Analysis:
    Time Complexity : O(n)
    Space Complexity : O(n)
*/