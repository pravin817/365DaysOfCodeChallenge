/*
  Day 29: 25/01/2023
  Platform : gfg
  Problem Link : https://practice.geeksforgeeks.org/problems/check-if-the-door-is-open-or-closed2013/1?page=1&company[]=TCS&sortBy=submissions
*/

class Solution {
  public:
    int *checkDoorStatus(int N) {
        
        static int arr[10005];
        
        for(int i = 1; i<=N;i++)
        {
            int temp = sqrt(i);
            
            if(temp*temp == i)
                arr[i-1] = 1;
            else
                arr[i-1] = 0;
        }
        return arr;
    }
};


/* 
  Analysis:
  Time Complexity: O(n)
  Space Complexity: O(1)
*/  
