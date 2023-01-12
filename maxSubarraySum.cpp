class Solution{
    public:

    long long maxSubarraySum(int a[], int n){
        
        long long maxh = 0, maxf = a[0];
        
        for(int i=0;i<n;i++) 
            {
                
                maxh+=a[i];

                if(maxf<maxh)
                maxf=maxh; 
                
                if(maxh<0)
                    maxh=0;
    
            }

            return maxf;
    }
};
