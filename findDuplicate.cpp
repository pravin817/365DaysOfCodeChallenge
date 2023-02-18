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


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int duplicate = -1;

        for(int i = 0; i< nums.size();i++)
        {
            int cur = abs(nums[i]);

            if(nums[cur] < 0)
            {
                duplicate = cur;
                break;
            }

            // make the number negative

            nums[cur] *=-1;
        }

        // now restore the array

        for(auto &num: nums)
        {
            num = abs(num);
        }

        return duplicate;
    }
};

/*
    Analysis:
    Time Complexity: O(n)
    Space Complexity : O(1)
*/    



class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        // Approach : 3 --- As the mentioned in the question that we can't modify the array and we need to use the only constant extra space , we will use the LinkedList cyclic method.

        // TC : O(n)
        // SC : O(1)

        int slow = nums[0];
        int fast = nums[0];

        // step -1 ---> Make the cycle

        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow!=fast);

        // step - 2 : return the slow / fast when both the pointing on the same number

        fast = nums[0];

        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
       
    }
};