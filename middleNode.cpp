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
