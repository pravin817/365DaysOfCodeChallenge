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
