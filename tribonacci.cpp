/*
  Day 34: 30/01/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/n-th-tribonacci-number/description/
*/

class Solution {
public:
    int tribonacci(int n) {
        
        // Recursive approach

        if(n == 0)
            return 0;

        if(n == 1 || n == 2)
            return 1;

        return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);    

    }
};

// Time Complexity : O(2^N)  ---> Exponential 


/* --------------------------------  II   ---------------------------------------- */

class Solution {
public:
    int tribonacci(int n) {
        
        // Now by using the tabulation

        vector<int> dp(n+3,0);

        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;


        for(int i =3; i<=n;i++)
        {
            dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
        }

        return dp[n];
    }
};


/*
    Anlysis:
    Time Complexity : O(n)
    Space Complexity : O(n)
*/    


class Solution {
public:
    int tribonacci(int n) {
        
        /* create the array of size 38 i.e from Constraints:

        0 <= n <= 37

        */

        int F[38];
        // Now intilalise the intial values

        F[0] = 0;
        F[1] = 1;
        F[2] = 1;

        // Now Iterate through the loop and return the ans

        for(int i = 3; i<=n;i++)
        {
            F[i] = F[i-1] + F[i-2] + F[i-3];
        }

        return F[n];
    }
};

/*
    Analysis:
    Time Complexity : O(n)
    Space Complexity : O(n)
*/    

/*  ****************************** ******************************** */

class Solution {
public:
    int tribonacci(int n) {

        // Define the base cases

        if(n == 0)
            return 0;

        if(n == 1 || n == 2)
            return 1;
            
        // Now we can optimise the space to O(1)
        // Let's see

        // We need to define four variables

        int a = 0,
            b = 1,
            c = 1,
            d = 0;


        // Now iterate throgth the loop and change the values

        for(int i =3; i<=n;i++)
        {
            d = a+b+c;
            a = b;
            b = c;
            c = d;
        }   

        return c;  

    }
};

/* 
    Analysis:
    Time Complexity : O(n)
    Space Complexity : O(1)
*/    