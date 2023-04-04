/*
  Day 82: 04/04/2023
  Platform : leetcode
  Problem Link : https://leetcode.com/problems/optimal-partition-of-string/description/
*/


class Solution {
public:
    int partitionString(string str) {
        int ans = 1;
        set<char>s;

        for(auto ch:str){
            if(s.find(ch)!=s.end()){
                s.clear();
                ans++;
            }
            s.insert(ch);
        }
        return ans;
    }
};