/*
  Day 66: 13/03/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/symmetric-tree/description/
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
    bool isSymmetric(TreeNode* root) {
        // check the base case 

        if(root == NULL)
            return true;
            return (isSymmetricTree(root->left,root->right));    
    }

    bool isSymmetricTree(TreeNode *p, TreeNode *q)
    {
        if(p==NULL && q==NULL)
            return true;
        else if(p==NULL || q==NULL)
            return false;
        else if(p->val!=q->val)
            return false;
        return(isSymmetricTree(p->left,q->right) && isSymmetricTree(p->right,q->left));        
    }
};