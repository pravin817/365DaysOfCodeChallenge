/*
  Day 21: 17/01/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/description/
*/

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        int count = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            // Calculates the sum of all the elements in given vector
            sum +=nums[i];
            
            // Calculates the sum of the digits in vector

            while(nums[i]) 
            {
                count += nums[i] % 10;
                nums[i] /= 10;
            }
        }
        
        // return the absolute diffrence between the sum and sum of digit i.e count

        return abs(sum-count);
        
    }
};

/*
    Analysis:
    Time Complexity : O(n) --> Where n is the number of the elements in the input vector, As we iterate through each element in the vector onces.
    Space Complexity : O(1) ---> as we are using a conastant amount of extra space to store the variable sum and count.
*/    

// Second Question : https://practice.geeksforgeeks.org/problems/middle-of-three2926/1?page=2&status[]=unsolved&category[]=Mathematical&sortBy=submissions

class Solution{
  public:
    int middle(int A, int B, int C){
        
        return ((A>=B && A <= C) || (A>=C && A<=B)) ?A:((B>=A && B<=C) || (B >= C && B <= A)) ?B:C;   
       
    }
};
/*
    Analaysis:
    TIme Complexity: O(1)
    Space Complexity: O(1)
*/
