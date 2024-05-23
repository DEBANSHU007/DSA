class Solution{
public:
    int kPalindrome(string str, int n, int k)
    {
    vector<vector<int>> dp(n, vector<int>(n, -1));
    return k >= solve(str, 0, n - 1, dp);
    }
    int solve(string &str, int i, int j, vector<vector<int>> &dp)
    {
        if (i >= j)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        if (str[i] == str[j])
            return dp[i][j] = solve(str, i + 1, j - 1, dp);
        return dp[i][j] = min(solve(str, i + 1, j, dp), solve(str, i, j - 1, dp)) + 1;
    }
};