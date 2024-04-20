class Solution {
public:
    void solve(int r, int c, int &r2, int &c2, vector<vector<int>>& land, vector<vector<int>>& vis) {
        int m = land.size();
        int n = land[0].size();
        vis[r][c] = 1;
        int dp1[4] = {-1, 1, 0, 0};
        int dp2[4] = {0, 0, -1, 1};
        for (int i = 0; i < 4; i++) {
            int nr = dp1[i] + r; 
            int nc = dp2[i] + c; 
            if (nr >= 0 && nr < m && nc >= 0 && nc < n && land[nr][nc] == 1 && !vis[nr][nc]) {
                r2 = max(r2, nr);
                c2 = max(c2, nc);
                solve(nr, nc, r2, c2, land, vis);
            }
        }
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int m = land.size();
        int n = land[0].size();
        vector<vector<int>> vis(m, vector<int>(n, 0));
        vector<vector<int>> ans;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!vis[i][j] && land[i][j] == 1) {
                    int r2 = i, c2 = j; 
                    solve(i, j, r2, c2, land, vis);
                    ans.push_back({i, j, r2, c2});
                }
            }
        }
        return ans;
    }
};