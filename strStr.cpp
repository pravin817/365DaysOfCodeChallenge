/*
  Day 58: 03/03/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
*/



class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size(), n = needle.size();
        for (int i = 0; i <= m - n; i++) {
            int j = 0;
            for (; j < n; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if (j == n) {
                return i;
            }
        }
        return -1;
    }
};