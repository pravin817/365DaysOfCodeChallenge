/*
  Date : 2/1/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/middle-of-the-linked-list/description/
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


/* Approach : 1
   calaculate the length of the linkedlist
   Then we can find the middle element by dividing the len by 2
   reach the middle node and return it.
*/   
   
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int len = 0;
        struct ListNode *p = head;
        while(p!=NULL)
        {
            len++;
            p = p->next;
        }

        int middleLength = (len/2) + 1;

        p = head;

        for(int i = 0;i<middleLength-1;i++)
        {
            p = p->next;
        }
        
        return p;
    }
};

/*
  Analysis:
  Time Complexity : O(n)
  Space Complexity : O(1)
*/  


-----------------------------------------------------------------------------------------------------------
  
/* 
   Approach : 2 
   Slow and Fast Pointer
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
  
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        // Now using the slow and fast pointer
        // slow pointer will move one node at a time while fast node will move the two nodes at a time.

        // let initilize the node to head

        ListNode* slow = head;
        ListNode* fast = head;

        // check if the fast reach at the last and fast->next is not NULL

        while(fast != NULL && fast->next !=NULL)
        {
            // Move the pointer

            slow = slow->next;
            fast = fast->next->next;
        }

        // Hence the slow pointer is at the middle of the linkedlist and return it.
        
        return slow;
    }
};


/* 
    Analysis:
    Time Complexity : O(n)
    Space Complexity : O(1)
*/      
