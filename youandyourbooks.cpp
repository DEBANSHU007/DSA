class Solution {
  public:
    /*You are requried to complete this method */
    long long max_Books(int arr[], int n, int k) {
        // Your code here
        int j=0;
        long long ans=0;
        long long sum=0;
        while(j<n){
            if(arr[j]<=k){
                sum+=arr[j];
            }
            else {
                ans=max(ans,sum);
                sum=0;
            }
            j++;
        }
        ans=max(ans,sum);
        return ans;
    }
};