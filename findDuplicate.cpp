/*
  Day 46: 14/02/2023
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/find-all-duplicates-in-an-array/description/
*/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;

        map<int,int>mp;

        for(int i = 0; i<nums.size();i++)
        {
            mp[nums[i]]++;
        }

        // Now iterate through the map

        for(auto x:mp)
        {
            if(x.second>=2)
                ans.push_back(x.first);
        }

        return ans;
    }
};

/*
    Analysis:
    TIme Complexity : O(n)
    Space Complexity : O(n)
*/    




class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;

        for(int i= 0; i<nums.size();i++)
        {
            int index = abs(nums[i])-1;
            int value = nums[index];

            if(value < 0)
            {
                // duplicate encountered

                ans.push_back(index+1);
            }
            else
            {
                // change the value to negative

                nums[index] = nums[index]*-1;
            }
        }
        return ans;
    }
};