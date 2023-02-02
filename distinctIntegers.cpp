/*
  Day 36: 01/02/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/count-distinct-numbers-on-board/description/
*/

class Solution {
public:
    int distinctIntegers(int n) {
        return(n == 1 ? 1 : n-1);
    }
};

/*
    Analysis:
    Time COmplexity : O(1)
    Space Complexity : O(1)
*/    



/*  Second Solution ---. Same as above */

class Solution {
public:
    int distinctIntegers(int n) {
        return max(n-1,1);
    }
};

/*
    Analysis:
    Time COmplexity : O(1)
    Space Complexity : O(1)
*/    