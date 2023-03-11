/*
  Day 64: 11/03/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/description/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
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


// Simple Approach :
// Convert the linked List into array and Convert it into BST 


class Solution {
public:

    TreeNode * BST(vector<int>nums,int left, int right)
    {
        // Check for the base condition 

        if(left > right)
            return NULL;

        // find the mid

        int mid = left + (right - left)/2;

        // Create the BST 

        TreeNode *temp = new TreeNode(nums[mid]);
        temp->left = BST(nums,left,mid-1);
        temp->right = BST(nums,mid+1,right);

        return temp;    
    }

    TreeNode* sortedListToBST(ListNode* head) {

        vector<int>v;

        while(head!=NULL)
        {
            v.push_back(head->val);
            head = head->next;
        }

        int left = 0;
        int right = v.size()-1;

        return BST(v,left,right);
    }
};