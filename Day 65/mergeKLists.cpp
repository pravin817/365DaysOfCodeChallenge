/*
  Day 65: 12/03/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/merge-k-sorted-lists/description/
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

    ListNode *mergeTwoList(ListNode*l1, ListNode* l2)
    {
        if(l1 ==nullptr)
            return l2;

        if(l2 == nullptr)
            return l1; 

        if(l1->val <= l2->val)
        {
            l1->next = mergeTwoList(l1->next,l2);
            return l1;
        }   
        else
        {
            l2->next = mergeTwoList(l1,l2->next);
            return l2;
        }    
    }


    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        // check for the empty condition

        if(lists.empty())   
            return nullptr;

        while(lists.size()>1)
        {
            lists.push_back(mergeTwoList(lists[0],lists[1]));

            lists.erase(lists.begin());
            lists.erase(lists.begin());
        }    
        return lists.front();
    }
};