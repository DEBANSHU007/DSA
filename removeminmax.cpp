class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int k1=-1;
        int k2=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(maxi<nums[i])
            {
                maxi=nums[i];
                k1=i;
            }
            if(mini>nums[i])
            {
                mini=nums[i];
                k2=i;
            }


        }
        int p1;
        int p2;
        p1=k1+1;
        int sum=0;
        p2=nums.size()-k1;
        if(p1>p2)
        {
            sum+=p2;
        }
        else
        {
            sum+=p1;
        }
        int j1;
        int j2;
        j1=k2+1;
        j2=nums.size()-k2;
        if(j1>j2)
        {
            sum+=j2;
        }
        else
        {
            sum+=j1;
        }
        int h;
        int h2;
        h2=(nums.size()-k1);
        int h3=(nums.size()-k2);
        int y;
        if(h2>h3)
        {
           y=h2;
        }
        else
        {
            y=h3;
        }
        if(k1>k2)
        {
            h=k1+1;
        }
        else
        {
            h=k2+1;
        }
        if(h<y)
        {
            return h<sum?h:sum;
        }
        else
        {
            return y<sum?y:sum;
        }
    }
};