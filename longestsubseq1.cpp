class Solution {
  public:
    int longestSubseq(int n, vector<int> &a) {
        // code here
        int ans=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[a[i]]=max(mp[a[i]-1],mp[a[i]+1])+1;
            ans=max(ans,mp[a[i]]);
        }
        return ans;
    }
};