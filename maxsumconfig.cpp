class Solution {
  public:
    long long max_sum(int A[], int N) {
        // Your code here
         
        long long int s=0;
        long long int s0=0;
        for(int i=0;i<N;i++)
        {
            s=s+(long long)A[i];
            s0=s0+(long long)A[i]*i;
        }
        long long int maxs=s0;
        long long int si=s0;
        for(int i=0;i<N-1;i++)
        {
            long long int sip1=si + s-N*(long long)A[N-i-1];
            if(sip1>maxs)
            {
                maxs=sip1;
            }
            si=sip1;
        }
        
        return maxs;
    }
};