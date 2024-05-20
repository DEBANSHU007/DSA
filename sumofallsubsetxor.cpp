class Solution {
public:
    int ans(vector<int>&nums,int i,int Xor)
    {
        if(i==nums.size())
        {
            return Xor;
        }
        int ans1=ans(nums,i+1,nums[i]^Xor);
        int ans2=ans(nums,i+1,Xor);
        return ans1+ans2;
    }
    int subsetXORSum(vector<int>& nums) {
        return ans(nums,0,0);
    }
};