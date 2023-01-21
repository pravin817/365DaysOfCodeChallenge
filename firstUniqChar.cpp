/*
  Day 25: 21/01/2023
  Platform : leetcode
  Problem Link : https://leetcode.com/problems/first-unique-character-in-a-string/description/
*/

class Solution {
public:
    int firstUniqChar(string s) {
        
        // Approach : insert the character into the map then find the index of the unique character in the string.


        // calculate the length of the string

        int len = s.size();

        // Insert the characters into the map

        map<char,int>mp;

        for(int i = 0; i < len;i++)
        {
            mp[s[i]]++;
        }

        // Now find the unique character

        for(int i = 0; i<len;i++)
        {
            if(mp[s[i]] == 1)
                return i;
        }
        return -1;
    }
};


/*
    Analysis:
    Time Complexity : O(n)
    Space Complexity : O(n)
*/    
