/*
  Day 62: 09/03/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/n-ary-tree-postorder-traversal/
*/


/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
private: 
    void postorder(Node* root, vector<int>& postOrderTraversal){
        if(root == NULL){
            return;
        }
        for(int i=0; i<root->children.size(); i++){
            postorder(root->children[i], postOrderTraversal);
        }
        postOrderTraversal.push_back(root->val);
    }
public:
    vector<int> postorder(Node* root) {
        vector<int> postOrderTraversal;
        postorder(root, postOrderTraversal);
        return postOrderTraversal;
    }
};

/*
    Analysis:
    Time COmplexity : O(n)
    Space Complexity : O(n)
*/    