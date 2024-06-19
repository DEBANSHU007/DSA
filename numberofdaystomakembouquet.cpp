class Solution {
public:
    bool check(vector<int>& bloomDay, int m, int k,int mid)
{
    int cnt=0;
    int no=0;
    for(int i=0;i<bloomDay.size();i++)
    {
        if(bloomDay[i]<=mid)
        {
            cnt++;
        }
        else
        {
            no+=cnt/k;
            cnt=0;
        }
    }
    no+=cnt/k;
    return no>=m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val=1LL*m*k;
        if(val>bloomDay.size())return -1;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<bloomDay.size();i++)
        {
               mini=min(mini,bloomDay[i]);
               maxi=max(maxi,bloomDay[i]);
        }
        int l=mini;
        int h=maxi;
        int ans=-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(check(bloomDay,m,k,mid))
           {
               ans=mid;
               h=mid-1;
           }
           else l=mid+1;
        }
        return ans;
    }
};