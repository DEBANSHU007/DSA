
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int sum=0;
        int k=n;
        while(k>0)
        {
            int rem=k%10;
            sum+=pow(rem,3);
            k=k/10;
        }
        if(sum==n)
        {
            return "Yes";
        }
        return "No";
    }
};