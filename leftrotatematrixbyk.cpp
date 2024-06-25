class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        
        vector<vector<int>>ans(n,vector<int>(m,0));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                ans[i][j]=mat[i][(j+k)%m];
            }
        }
        return ans;
    }
};