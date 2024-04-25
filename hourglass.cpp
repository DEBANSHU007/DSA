class Solution {
  public:
    int findMaxSum(int n, int m, vector<vector<int>> mat) {
        // code here
        int ans=-1;
        for(int i=1;i<n-1;i++)
        {
            for(int j=1;j<m-1;j++)
            {
                ans=max(ans,mat[i-1][j]+mat[i+1][j]+mat[i][j]+mat[i-1][j-1]+mat[i-1][j+1]+mat[i+1][j-1]+mat[i+1][j+1]);
            }
        }
        return ans;
    }
};