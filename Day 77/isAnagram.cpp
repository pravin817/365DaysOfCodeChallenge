/*
  Day 77: 28/03/2023
  Platform : leetcode
  Problem Link : https://leetcode.com/problems/valid-anagram/description/
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;

        sort(s.begin(),s.end());    
        sort(t.begin(),t.end());    
    
        return s==t;
    }
};

/*
    Analysis:
    Time Complexity : O(logn)
    Space Complexity : O(1)
*/    

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;

        int Hash[26] = {0};

        for(int i = 0;i<s.size();i++){
            Hash[s[i]-'a']++;
            Hash[t[i]-'a']--;
        }    

        for(int i=0; i<26;i++){
            if(Hash[i])
                return false;
        }
        return true;
    }
};