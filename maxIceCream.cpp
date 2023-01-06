/*
  Day 10: 06/01/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/maximum-ice-cream-bars/description/
*/

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n = costs.size();
        sort(costs.begin(),costs.end());

        if(costs[0] > coins)
            return 0;


        for(int i = 0; i<n;i++)
        {   
            if(costs[i] <= coins)
            {
                coins -=costs[i];
            }
            else
            {
                return i;
            }
        }    
        return n;
    }
};


/*
  Analysis:
  Time Complexity : O(nlogn)
  Space Complexity : O(1)
*/  
