
/*
  Day 13: 10/01/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/same-tree/description/
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL || q == NULL)
            return (p == q);

        return(p->val == q->val) && isSameTree(p->left,q->left)&&isSameTree(p->right, q->right);    
    }
};

/* For checking the trees are same we can perfomr any of the traversel , here i have performed Preorder traversal ----> root ->left ->right

*/

/*
    Analysis:
    Time Complexity : O(n)
    Space Complexiy : o(n)
*/    



///////////////////////////////////  II QUESTION /////////////////////////////////////////////

// https://leetcode.com/problems/counting-bits/description/


class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>mem(n+1);

        mem[0] = 0;

        for(int i = 1; i<=n;i++)
        {
            mem[i] = mem[i/2] + i%2;
        }

        return mem;
    }
};

/*
    Analysis:
    Time Complexity: O(n)
    Space Complexity : O(n)
*/    
