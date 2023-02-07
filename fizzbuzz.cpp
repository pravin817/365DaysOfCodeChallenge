/*
  Day 40: 07/02/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/fizz-buzz/description/
*/

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for(int i = 1; i<=n;i++){
            if(i %3 == 0 && i % 5 == 0)
                ans.push_back("FizzBuzz");
            else if(i % 3 == 0)
                ans.push_back("Fizz");
            else if(i % 5 == 0)
                ans.push_back("Buzz");
            else
                ans.push_back(to_string(i));      
        }
        return ans;
    }
};


/*
    Analysis:
    Time Complexity : O(n)
    Space Complexity : O(n)
*/    