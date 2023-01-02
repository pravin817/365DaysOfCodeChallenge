/*
  Date : 1/1/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/detect-capital/
*/  


class Solution {
public:
    bool detectCapitalUse(string word) {
        int len = word.size();

        int countCapital = 0;

        for(auto x:word)
        {
            if(x >='A' && x <= 'Z')
                countCapital++;
        }

        if((countCapital == len)|| (countCapital == 0) || (countCapital == 1) && (word[0] >= 'A' && word[0] <='Z'))
            return true; 
        else 
            return false;       
    }
};

/*
  Analysis:
  Time Complexity : O(n)
  Space Complexity : O(1)
*/  
