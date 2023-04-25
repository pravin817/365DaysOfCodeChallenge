/*
  Day 85: 25/04/2023
  Platform : leetcode
  Problem Link : https://leetcode.com/problems/binary-tree-inorder-traversal/description/
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
    vector<int> inorderTraversal(TreeNode* root) {
        // Inorder Traversal using the recursion

        vector<int>nodes;
        inOrderTraversal(root,nodes);
        return nodes;
    }

private:
    void inOrderTraversal(TreeNode * root,vector<int> &nodes){
        if(!root){
            return ;
        }

        inOrderTraversal(root->left,nodes);
        nodes.push_back(root->val);
        inOrderTraversal(root->right,nodes);
    }
};

/*
    Analysis:
    Time Complexity : O(n)
    Space Complexity : O(n)
*/


// GFG : InorderTraversal : ====> https://practice.geeksforgeeks.org/problems/inorder-traversal/1

/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        
        vector<int>nodes;
        InorderTraversal(root,nodes);
        return nodes;
    }
    
  private:
    void InorderTraversal(Node * root, vector<int>&nodes){
        if(root == NULL)
            return;
            
        InorderTraversal(root->left,nodes);
        nodes.push_back(root->data);
        InorderTraversal(root->right,nodes);
    }
};

/*
    Analysis:
    Time Complexity : o(n)
    Space complexity : O(n) ---->Height of stack is considered
*/


// GFG : PreorderTraversal : ====> https://practice.geeksforgeeks.org/problems/preorder-traversal/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};
vector<int> preorder(struct Node* root);

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // for(string i:ip)
    //     cout<<i<<" ";
    // cout<<endl;
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


int main() {
    int t;
    scanf("%d ",&t);
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);

        vector<int> res = preorder(root);
        for (int i : res)
            cout << i << " ";
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


/* A binary tree node has data, pointer to left child
   and a pointer to right child  

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

//Function to return a list containing the preorder traversal of the tree.


void PreorderTraversal(Node * root,vector<int>&nodes){
    if(root == NULL)
        return;
        
    nodes.push_back(root->data);    
    PreorderTraversal(root->left,nodes);
    PreorderTraversal(root->right,nodes);
}


vector <int> preorder(Node* root)
{
  // Your code here
  vector<int>nodes;
  PreorderTraversal(root,nodes);
  return nodes;
}


/*
    Analaysis:
    Time Complexity : O(n)
    Space Complexity : O(n)
*/


// GFG : PostOrderTraversal : ====> https://practice.geeksforgeeks.org/problems/postorder-traversal/1

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}

/* Computes the number of nodes in a tree. */
vector <int> postOrder(struct Node* root);

/* Driver program to test size function*/
int main()
{
  int t;
  cin>>t;
  getchar();
  while (t--)
  {
  	 string inp;
     getline(cin, inp);
     struct Node* root = buildTree(inp);

     vector <int> res = postOrder(root);
     for (int i = 0; i < res.size (); i++)
        cout << res[i] << " ";
     cout << endl;
  }
  return 0;
}
// } Driver Code Ends


//User function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

//Function to return a list containing the postorder traversal of the tree.

void PostOrderTraversal(Node * root, vector<int>&nodes){
    if(root == NULL)
        return;
        
    PostOrderTraversal(root->left,nodes);
    PostOrderTraversal(root->right,nodes);
    nodes.push_back(root->data);
}


vector <int> postOrder(Node* root)
{
  vector<int>nodes;
  PostOrderTraversal(root,nodes);
  return nodes;
}

/*
    Analaysis:
    Time Complexity : O(n)
    Space Complexity : O(n)
*/
