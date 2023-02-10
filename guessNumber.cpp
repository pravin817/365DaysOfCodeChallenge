/*
  Day 42: 10/02/2023
  Platform : leetcode
  Problem Link : https://leetcode.com/problems/guess-number-higher-or-lower/description/
*/


/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */


class Solution {
public:
    int guessNumber(int n) {
        
        // Lets apply the linear search

        for(int i = 1; i<n; i++)
        {
            if(guess(i) == 0)
                return i;
        }
        return n;
    }
};

/*
    Analysis:
    Time Complexity : O(n)
    Space Complexity : O(1)
*/    


/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        

        int low = 1;
        int high = n;

        while(low <= high)
        {

            int mid = low + (high - low)/2;

            int result = guess(mid);

            if(result == 0)
                return mid;

            else if(result == -1)
                high = mid - 1;
            else
                low = mid + 1;   
        }
        return -1;
    }
};

/*
    Analysis:
    Time Complexity : O(logn)
    Space Complexity : O(1)
*/    


/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        // Lets apply the ternary search

        int low = 1;
        int high = n;

        while(low <= high)
        {
            int mid1 = low + (high - low)/3;
            int mid2 = high - (high - low)/3;

            int res1 = guess(mid1);
            int res2 = guess(mid2);

            if(res1 == 0)
                return mid1;

            if(res2 == 0)
                return mid2;

            else if(res1 < 0)   // between low and mid1
                high = mid1-1;
            else if(res2 > 0)   // between mid2 and high
                low = mid2 + 1;
            else // between mid1 and mid2
            {
                low = mid1 + 1;
                high = mid2 - 1;
            }                
        }
        return -1;
    }
};

/*
    Analysis:
    Time Complexity : O(log3n)
    Space Complexity : O(1)
*/    