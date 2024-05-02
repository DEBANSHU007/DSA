class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int key=INT_MIN;
        while(i<=j)
        {
            if(nums[i]==-1*nums[j])
            {
                key=nums[i];
                break;
            }
            else if(nums[i]*-1<nums[j])
            {
                j--;
            }
            else if(nums[i]*-1>nums[j])
            {
                i++;
            }
        }
        return key==INT_MIN?-1:-1*key;
    }
};