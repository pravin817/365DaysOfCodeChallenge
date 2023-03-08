/*
  Day 61: 08/03/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/koko-eating-bananas/description/
*/

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = INT_MAX;

        while(low<=high)
        {

            // find the mid 

            long mid = low + (high-low)/2;

            if(canEatInTime(piles,mid,h))
                high = mid-1;
            else
                low = mid + 1;    
        }
        return low;
    }


    bool canEatInTime(vector<int>&piles,long k, int h)
    {
        int Hr = 0;
        for(int pile:piles)
        {
            long div = pile/k;
            Hr+=div;

            if(pile%k!=0)
                Hr++;
        }
        return Hr<=h;
    }
};

/*
    Analysis:
    Time Complexity : O(nlogm)
                    |----> we know that binary search takes O(logn)
                    |----> and canEatInTime() function takes O(n) 
                    |----> Hence Overall Time Complexity is : O(nlogn)

    Space Complexity : O(1)
*/    