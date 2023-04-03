/*
  Day 81: 03/04/2023
  Platform : leetcode
  Problem Link : https://leetcode.com/problems/boats-to-save-people/description/
*/

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        // 1.Sort the array

        sort(people.begin(),people.end());

        int count = 0;
        int start = 0;
        int end = people.size()-1;

        while(start<=end){
            if(people[start] + people[end] <= limit){
                count++;
                start++;
                end--;
            }else if(people[start]+ people[end] > limit){
                count++;
                end--;
            }
        }
        return count;
    }
};

/*  
    Analysis:
    Time Complexity : O(nlogn)
    Space Complexity : O(1)
*/    