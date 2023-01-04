/*
  Day 7: 04/01/2023
  Platform : leetcode
  Problem Link : https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/description/
*/  

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>mp;

        for(auto task:tasks)
        {
            mp[task]++;
        }

        int round = 0;

        for(auto x:mp)
        {
            if(x.second<=1)
                return -1;
            else if(x.second == 2)
                round++;
            else
                round += ceil((double(x.second)/3.0));        
        }
        return round;
    }
};

/* 
  Analysis:
  Time Complexity : O(n)
  Space Complexity : O(n)
*/
