/*
  Day 44: 12/02/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/valid-perfect-square/
*/

class Solution {
public:
    bool isPerfectSquare(int num) {
        int number = sqrt(num);

        if(number*number == num)
            return true;
        else 
            return false;    
    }
};

/* In above solution we have used the sqrt() function, which is not allowed */


class Solution {
public:
    bool isPerfectSquare(int num) {
        // Let's try binary search

        long long int low = 0;
        long long int high = num;

        while(low <= high)
        {
            // find the mid

            long long int mid = low + (high - low)/2;

            long long int pro = mid * mid;
            if(pro == num)
                return true;
            else if(pro > num)
                high = mid - 1;
            else
                low = mid + 1;        
        }
        return false;
    }
};

/*
    Analysis:
    Time Complexity : O(logn)
    Space Complexity : O(1)
*/    


/*Another solution in JavaScript*/

/**
 * @param {number} num
 * @return {boolean}
 */
var isPerfectSquare = function(num) {
    return (num**0.5)%1 == 0;
};

