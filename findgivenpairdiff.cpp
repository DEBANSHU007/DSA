class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[abs(x+arr[i])]!=0)
            {
                return 1;
            }
        }
        return -1;
    }
};