/*
    Day 55: 25/02/2023
    Platform : Leetcode
    Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
*/


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        int minPrice = INT_MAX;

        for(int i = 0; i<prices.size();i++)
        {
            minPrice = min(minPrice,prices[i]);
            maxPro = max(maxPro,prices[i]-minPrice);
        }
        return maxPro;
    }
};

/*
    Analysis:
    Time Complexity : O(n)
    Space Complexity : O(1)
*/    
