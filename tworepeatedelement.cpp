class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int n) {
        // Your code here
        unordered_map<int,int>mp;
        for(int i=0;i<n+2;i++)
        {
            mp[arr[i]]++;
        }
        vector<int>v;
        for(int i=n+1;i>=0;i--)
        {
            if(mp[arr[i]]==2)
            {
                v.push_back(arr[i]);
                mp[arr[i]]=0;
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};