/*
  Day 80: 02/04/2023
  Platform : gfg
  Problem Link : https://practice.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions
*/

// Problem : 1
// Link : https://practice.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions
class Solution{
    public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(int arr[], int N, int X)
    {
        
        // We can apply the linear search
        
        for(int i = 0; i<N;i++){
            if(arr[i] == X)
                return i;
        }
        
        // If the lemeent is not found
        
        return -1;
        
    }

};

/*
    Analysis:
    Time Complexity : O(n)
    Space Complexity : O(1)
*/


// ################################ Problem : 2 #########################################
// link : https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions


class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        // We can sort the both the arrays and then compare the each element on eby one
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        
        // Now compare the elements one by one
        
        for(int i = 0; i<N;i++){
            if(A[i] != B[i])
                return false;
        }
        
        // If all the elements are matched array are equal.
        return true;
    }
};

/*  
    Analysis:
    Time Complexity : O(nlogn)
    Space Complexity : O(n)
*/  


// We can optimize it time complexity by using the Map

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
    // Now apply the map to solve the problem
        
    unordered_map<int, int> mp;
 
     for (auto i : A)
        mp[i]++;
 
    for (auto i : B) {
        mp[i]--;
        if (mp[i] == 0)
            mp.erase(i);
    }
 
    if (mp.size() == 0)
        return true;
    return false;
    }
};


/*
    Analysis:
    Time Complexity : O(n)
    Space Complexity : O(n)
*/ 