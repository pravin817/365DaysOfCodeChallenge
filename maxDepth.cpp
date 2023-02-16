/*
  Day 48: 16/02/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/maximum-depth-of-binary-tree/
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
    int maxDepth(TreeNode* root) {
        

        // if the binary tree is empty then return 0

        if(root == NULL)
            return 0;

        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);

        // As we have find the left and right height of the binary tree

        // now we need to return the 1 + max(lh,rh)----> because we need to consider the root of the binary tree.

        return 1+max(lh,rh);   
    }
};


// Solution using the ternary operators


class Solution {
public:
    int maxDepth(TreeNode* root) {
        return (root == NULL) ? 0 : 1+max(maxDepth(root->left), maxDepth(root->right));
    }
};