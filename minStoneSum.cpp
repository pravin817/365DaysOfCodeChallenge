// Date : 28/12/2022
// Link to solve Problem : https://leetcode.com/problems/remove-stones-to-minimize-the-total/description/


class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        
        priority_queue<int>pq;

        for(auto x:piles)
        {
            pq.push(x);
        }

        while(k--)
        {
            int topElement = pq.top();
            pq.pop();
            pq.push(topElement - floor(topElement/2));
        }

        int sum = 0;

        while(!pq.empty())
        {
            sum +=pq.top();
            pq.pop();
        }

        return sum;
    }
};
