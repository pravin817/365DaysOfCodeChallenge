/*
  Day 37: 02/02/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/convert-the-temperature/description/
*/

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;

        ans.push_back(celsius + 273.15);
        ans.push_back(celsius*1.80 + 32.00);
        return ans;
    }
};


/* ************************************************* */

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        return {
                celsius + 273.15,
                celsius * 1.80 + 32.00
        };
    }
};


/*
    Analysis:
    Time Complexity: O(1)
    Space Complexity: O(1)
*/