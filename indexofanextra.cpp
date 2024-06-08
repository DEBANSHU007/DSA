class Solution {
  public:
    int findExtra(int n, int arr1[], int arr2[]) {
        // add code here.
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr1[i]]++;
        }
        for(int i=0;i<n-1;i++)
        {
            mp[arr2[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[arr1[i]]==1)
            {
                return i;
            }
        }
    }
};