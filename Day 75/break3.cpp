/*
  Day 73: 25/03/2023
  Platform : Leetcode
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
        int low = 1;
        int high = n;

        while(low<=high){
            int mid = low+(high-low)/2;

            int result = guess(mid);

            if(result == 0)
                return mid;
            else if(result == -1)
                high = mid-1;
            else
                low = mid +1;        
        }
        return 0;
    }
};

/*
    Analysis:
    Time Complexity : O(logn)
    Space Complexity : O(1)
*/    