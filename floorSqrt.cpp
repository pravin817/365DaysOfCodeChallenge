/*
  Day 44: 12/02/2023
  Platform : GFG
  Problem Link : https://practice.geeksforgeeks.org/problems/square-root/1
*/


class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        int i = 1;
        
        while(i*i <= x)
            i++;
            
        return (i-1);    
    }
};


/*
    Analysis:
    Time Complexity : O(n)
    Space Complexity :O(1)
*/


class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        return pow(x,0.5);
    }
};

/*
    Analysis:
    Time Complexity : O(logn)
    Space Complexity : O(1)
*/


class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // We can apply the binary search
        
        int low = 0;
        int high = x;
        int ans = -1;
        while(low <= high)
        {
            // find the mid
            
            long long int mid = low + (high - low)/2;
            
            long long int pro = mid * mid;  
            
            if(pro == x)
                return mid;
                
            else if(pro > x)
                high = mid - 1;
            else
            {
                ans = mid;
                low = mid + 1;
            }
        }
        return ans;
    }
};

/*
    Analysis: 
    Time Complexity : O(logn)
    Space Complexity : O(1)
*/