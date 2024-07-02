class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int arr1[10000]={0};
        int arr2[10000]={0};
        vector<int>v;
        for(int i=0;i<nums1.size();i++)
        {
            arr1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            arr2[nums2[i]]++;
        }
        for(int i=0;i<nums1.size();i++)
        {
            if(arr2[nums1[i]]!=0)
            {
               v.push_back(nums1[i]);
               arr2[nums1[i]]--;
            }
        }
        return v;
    }
};