class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            string s="";
            for(int j=0;j<nums.size();j++)
            {
                if(j!=i)
                {
                    s=nums[i]+nums[j];
                    if(s==target)
                    {
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};