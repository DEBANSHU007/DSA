class Solution {
  public:
    int minRow(int n, int m, vector<vector<int>> a) {
        // code here
        int ans=INT_MAX;
        int count=INT_MAX;
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<m;j++){
                if(a[i][j]==1)
                    c++;
            }
            if(c<count){
                count=c;
                ans=i+1;
            }
            
        }
        return ans;
    }
};