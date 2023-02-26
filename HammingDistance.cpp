/*
    Day 56: 26/02/2023
    Platform : Leetcode
    Link : https://leetcode.com/problems/hamming-distance/description/
*/

// Approach :
// 1) Take the xor 
// 2) Count the set bit in the number and return 

class Solution {
public:
    int hammingDistance(int x, int y) {
        int num = x ^ y;
        int count = 0;

        while(num)
        {
            count+=num%2;
            num >>= 1;
        }
        return count;
    }
};

/*
    Analysis:
    Time Complexity : O(n)
    Space Complexity : O(1)
*/    


///////////////////////////////


class Solution {
public:
    int hammingDistance(int x, int y) {
        return __builtin_popcount(x^y);
    }
};