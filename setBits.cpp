/*
  Day 24: 20/01/2023
  Platform : gfg
  Problem Link : https://practice.geeksforgeeks.org/problems/set-bits0143/1?page=1&curated[]=8&sortBy=submissions
*/

class Solution {
  public:
    int setBits(int N) {
        int ans = 0;
        
        while(N>0)
        {
            if(N & 1 == 1)
                ans++;
                
            N >>= 1;    
        }
        return ans;
    }
};
