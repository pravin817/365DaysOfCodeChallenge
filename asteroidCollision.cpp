/*
  Day 2: 29/12/2022
  Platform : GFG
  Problem Link : https://practice.geeksforgeeks.org/problems/asteroid-collision/1
*/  

class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &asteroids) {
        // create stack
        
        stack<int>s;
        
        int i = 0;
        while(i < N)
        {
            if(s.empty())
            {
                s.push(asteroids[i]);
                i++;
            }
            
            else
            {
                // check for the valid condition
                // + +
                // - -
                // - +
                if((asteroids[i] > 0 && s.top() > 0) || (asteroids[i] < 0 && s.top() < 0) || (asteroids[i] > 0 && s.top() < 0))
                {
                    s.push(asteroids[i]);
                    i++;
                }
                
                else if(s.top() > 0 && asteroids[i] < 0)
                {
                    int x = s.top();
                    s.pop();
                    
                    // Both the elements are same 
                    
                    if(x == abs(asteroids[i]))
                        i++;
                    else if(x > abs(asteroids[i]))
                    {
                        s.push(x);
                        i++;
                    }
                    else if(x < abs(asteroids[i]))
                    {
                        continue;
                    }
                }
            }
        }
        
        
        // load the data from the stack to vector and reverse it and return 
        
        vector<int>ans;
        
        while(!s.empty())
        {
            int temp = s.top();
            s.pop();
            ans.push_back(temp);
        }
        
        // Now reverse the vector 
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};


/* 
   Analysis:
   Time Complexity : O(n)
   Space Complexity : O(n)
*/   
   
