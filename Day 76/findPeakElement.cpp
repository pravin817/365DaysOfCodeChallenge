/*
  Day 76: 27/03/2023
  Platform : gfg
  Problem Link : https://practice.geeksforgeeks.org/problems/find-the-highest-number2259/1
*/

class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        // The easy solution is linear search
        
        int maxi = INT_MIN;
        
        for(int i=0;i<a.size();i++){
            maxi = max(maxi,a[i]);
        }
        return maxi;
    }
};

/*  Analysis:
    Time Complexity : O(logn)
    Space Complexity : O(1)
*/    


class Solution {
public:
    int findPeakElement(vector<int>& arr) 
    {
        // As the array is sorted we can think about Binary Search
        
        int low = 0;
        int high = arr.size()-1;
        int mid = low+(high-low)/2;
        while(low<high){
            // Find the mid element
            
            if(arr[mid]<arr[mid+1]){
                low = mid + 1;
            }
            else{
                high = mid;
            }
            mid = low+(high-low)/2;    
        }
        return arr[low];
    }
};

/*
    Analysis:
    Time Complexity : O(logn)
    Space Complexity : O(1)
*/    