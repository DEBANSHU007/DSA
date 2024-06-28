class Solution {
  public:

    string pattern(vector<vector<int>> &arr) {
        // Code Here
         int n = arr.size(), m = arr[0].size();
        
        for(int i = 0; i<n; i++)
        {
            bool flag = true;
            
            for(int j = 0; j<m/2; j++)
                if(arr[i][j] != arr[i][m-1-j])
                    flag = false;
            if(flag)
            {
                string out = to_string(i);
                out += " R";
                return out;
            }
        }
        
        for(int j = 0; j<m; j++)
        {
            bool flag = true;
            
            for(int i = 0; i<n/2; i++)
                if(arr[i][j] != arr[n-1-i][j])
                    flag = false;
            if(flag)
            {
                string out = to_string(j);
                out += " C";
                return out;
            }
        }
        
        return "-1";
    }
};