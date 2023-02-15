/*
  Day 47: 15/02/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/add-to-array-form-of-integer/description/
*/

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        for(int i=num.size()-1;i>=0;i--){
            num[i] += k;
            k = num[i]/10;
            num[i] %= 10;
        }
        while(k > 0){
            num.insert(num.begin(), k%10);
            k /= 10;
        }
        return num;
    }
};

/*
    Analysis:
    TIme Complexity : O(n)
    Space Complexity : O(1)
*/    