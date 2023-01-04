/*
  Day 8: 04/01/2023
  Platform : leetcode
  Problem Link : https://leetcode.com/problems/remove-linked-list-elements/description/
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
    ListNode* removeElements(ListNode* head, int val) {
        
        // if the linked list is empty the return null

        if(head == NULL)
            return NULL;

        // Create the dummy node and assign it with -1

        ListNode *dummy = new ListNode(-1); 

        // Add it before the head node

        dummy->next = head;

        // Now create the tail node 

        ListNode *tail = dummy;

        // Iterate through the linked list

        while(tail!=NULL && tail->next!=NULL)
        {
            // check for the condition

            if(tail->next->val == val)
            {
                // create temp node 
                ListNode *temp = tail->next;
                tail->next = temp->next;
                delete temp;
            }
            else
            {
                // move to next node

                tail = tail->next;
            }
        }   

        // Now return the linked list starting from the head i.e 
        return dummy->next;
    }
};

/*
  Analysis:
  Time Complexity : O(n)
  Space Complexity : O(1)
*/  
