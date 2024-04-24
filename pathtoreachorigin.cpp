class Solution
{
public:
    int ways(int x, int y)
    {
        //code here.
        int mod=1e9+7;
        vector<vector<int>> dp(x+1, vector<int> (y+1, 0));
        for(int i = 0 ; i < x+1 ; i++) {
            dp[i][0] = 1;
        }
        for(int j = 0 ; j < y+1 ; j++) {
            dp[0][j] = 1;
        }
        for(int i = 1 ; i < x+1 ; i++) {
            for(int j = 1 ; j < y+1 ; j++) {
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
            }
        }
        return dp[x][y];
    }
};