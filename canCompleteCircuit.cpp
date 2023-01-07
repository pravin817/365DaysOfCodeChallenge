/*
  Day 11: 07/01/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/gas-station/description/
*/



class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0;
        int totalCost = 0;

        int start = 0, current = 0;

        //Calculate the sum of gas and cost

        for(int i = 0; i<gas.size();i++)
        {
            totalGas +=gas[i];
        }

        for(int i = 0; i<cost.size(); i++)
        {
            totalCost +=cost[i];
        }

        // if totalGas < totalCost the return -1

        if(totalGas < totalCost)
            return -1;

        for(int i = 0; i<gas.size();i++)
        {
            current += gas[i] - cost[i];

            if(current < 0)
            {
                start = i+1;
                current = 0;
            }
        }    
        return start;
    }
};

/*
    Analysis:
    Time Complexity : O(n)
    Space Complexity : O(1)
*/    




/* ************************************************  II ******************************************************** */
// Problem Link : https://leetcode.com/problems/add-two-numbers/description/

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Create the three linkedlist

        ListNode *ans = new ListNode(0);
        ListNode *p = l1,*q = l2, *curr = ans;

        int carry = 0;
        while(p!=NULL || q!=NULL)
        {
            // Take the value from linked list l1
            int x = (p!=NULL) ? p->val : 0;

            // Take the value from linked list l2
            int y = (q!=NULL) ? q->val : 0;

            // Calculate the sum

            int sum = carry+x+y;

            // Update the current linked lisy
            curr->next = new ListNode(sum%10);
            
            // Update the carry
            carry = sum/10;

            // Move the pointer to the next node
            curr = curr->next;


            // Move to the next node of the linked lists

            if(p!=NULL)
                p = p->next;

            if(q!=NULL)
                q = q->next;    
        }


        // If there is the carry then add it to the curr

        if(carry>0)
            curr->next = new ListNode(carry);

        // return the ans->next because ans start with the 0.
        return ans->next;    
    }

};


/*
    Analysis:
    Time Complexity: O(n)
    Space Complexity : O(max(l1,l2));
*/    






