class Solution {

  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        int sum1=0;
        int sum2=0;
        for(int i=0;i<n;i++)
        {
            sum1+=a[i];
        }
        for(int j=0;j<m;j++)
        {
            sum2+=b[j];
            
        }
        int sum=sum1+sum2;
        int k=sum/2;
        if(sum%2!=0)
        {
            return -1;
        }
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int i=0;i<n;i++)
        {
            mp1[a[i]]++;
        }
        for(int j=0;j<m;j++)
        {
            mp2[b[j]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp2[k-(sum1-a[i])]!=0)
            {
                return 1;
            }
        }
        return -1;
        
    }
};