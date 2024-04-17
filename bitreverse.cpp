class Solution {
  public:
    long long reversedBits(long long x) {
        // code here
        int k;
        long long int sum=0;
        for(int i=31;i>=0;i--)
        {
            k=x&1;
            sum+=k*pow(2,i);
            x=x>>1;
            
        }
        return sum;
    }
};