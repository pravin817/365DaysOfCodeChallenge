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


// Second Approach:

// Find the mid of the linked list
// |----> Two Options
//       |---->  By find the total number of the nodes then travel to the nodes/2
//          --> It takes time (2*n) ====> O(n)

//       |----> By using the slow and fast pointer 
//          --> It will takes the time (n/2) ===> O(n)

// Then Prepare the BST

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
class Solution {
public:

    TreeNode * ConvertToBST(ListNode*start,ListNode*end)
    {
        // check the base case

        if(start == end)
            return nullptr;

        // Now find the mid in the linked list -----(n/2)====> O(n)

        ListNode *slow = start;
        ListNode *fast = start;

        while(fast!=end && fast->next!=end)
        {
            // move slow pointer by one place

            slow = slow->next;

            // move fast pointer by two place

            fast = fast->next->next;
        }    

        // Now the slow pointer is pointing to the mid of the linkedlist


        TreeNode *temp = new TreeNode(slow->val);
        temp->left = ConvertToBST(start,slow);
        temp->right = ConvertToBST(slow->next, end);
        return temp;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        // check for the base condition

        if(head == nullptr)
            return nullptr;

        return ConvertToBST(head,nullptr);    
    }
};


/*
    Analysis:
    Time Complexity : O(nlogn)
    Extra Space : O(1)
*/