/*
  Day 84: 18/04/2023
  Platform : leetcode
  Problem Link : https://leetcode.com/problems/merge-strings-alternately/description/
*/


class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";

        int m = word1.length();
        int n = word2.length();

        int s1,s2;
        s1 = s2 = 0;

        int i = 0;  // For the checking the turn

        while(s1!=m && s2 != n){
            if(i%2 == 0){
                ans+=word1[s1++];
            }else{
                ans+=word2[s2++];
            }
            i++;
        }

        // check for the remaining character if present
        while(s1!=m){
            ans+=word1[s1++];
        }

        while(s2!=n){
            ans+=word2[s2++];
        }
        return ans;
    }
};

/*
    Analysis:
    TIme Complexity : O(m+n) ===> O(n)
    Space Complexity : O(m+n) ====> O(n)
*/