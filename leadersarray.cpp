vector<int> leaders(int a[], int n){
        // Code here
        int maxi=INT_MIN;
        vector<int>v;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>=maxi)
            {
                v.push_back(a[i]);
            }
            maxi=max(maxi,a[i]);
        }
        reverse(v.begin(),v.end());
        return v;
        
    }