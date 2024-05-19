class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
        unordered_map<int,int>mp;
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            mini=min(mini,abs(arr[i]-k));
            mp[arr[i]]=abs(arr[i]-k);
        }
        vector<int>v;
        for(auto it:mp)
        {
            if(it.second==mini)
            {
                v.push_back(it.first);
            }
        }
        sort(v.begin(),v.end());
        return v[v.size()-1];
    } 
};