/*
  Day 63: 10/03/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/linked-list-random-node/description/
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
ListNode *temp;

    Solution(ListNode* head) {
       temp=head;
   }
    int getRandom() {
       int l=1,res=0;
       ListNode* t=temp;
       while(t)
       {
           if(rand()%l==0)
           {
               res=t->val;
           }
           l++;
           t=t->next;
       }
       return res;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */