/*
  Day 50: 19/02/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;

        if(root == NULL)
            return ans;

        queue<TreeNode*> nodesQueue;
        nodesQueue.push(root);
        bool leftToRight = true;

        while(!nodesQueue.empty())
        {
            int size = nodesQueue.size();

            vector<int>row(size);

            for(int i = 0; i< size; i++)
            {
                TreeNode* node = nodesQueue.front();
                nodesQueue.pop();

                // Find the position to fill the values

                int index = leftToRight ? i : (size-1-i);

                row[index] = node->val;

                if(node->left)
                {
                    nodesQueue.push(node->left);
                }

                if(node->right)
                {
                    nodesQueue.push(node->right);
                }
            }

            // after this level change the sign 

            leftToRight = !(leftToRight);
            ans.push_back(row);
        }     

        return ans;
    }
};

/*
    Analysis:
    Time Complexity : O(n)
    Space Complexity : O(n)
*/    