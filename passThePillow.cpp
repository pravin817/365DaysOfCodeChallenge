/*
  Day 59: 05/03/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/pass-the-pillow/description/
*/

class Solution {
public:
    int passThePillow(int n, int time) {
        return n - abs(n - 1 - time % (n * 2 - 2));
    }
};

/*
    Analysis:
    Time Complexity : O(1)
    Space Complexity : O(1)
*/    