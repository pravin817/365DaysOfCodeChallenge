// link: https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1?page=1&difficulty[]=1&category[]=Arrays&sortBy=submissions



class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        
        // sort the array
        
         sort(arr, arr + n);

        int ans = arr[n - 1] - arr[0];
  
        int tempmin, tempmax;
        tempmin = arr[0];
        tempmax = arr[n - 1];
  
        for (int i = 1; i < n; i++) {
  
            if (arr[i] - k < 0)
                continue;
  
            tempmin = min(arr[0] + k, arr[i] - k);
  

            tempmax = max(arr[i - 1] + k, arr[n - 1] - k);
  
            ans = min(ans, tempmax - tempmin);
        }
        return ans;
    }
};
