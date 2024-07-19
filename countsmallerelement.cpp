class Solution {
  public:
    vector<int> constructLowerArray(vector<int> &arr) {
        // code here
        vector<int>vec=arr;
        vector<int>ans;
        sort(vec.begin(),vec.end());
        
        for(int i=0;i<arr.size();i++){
            
            int idx=lower_bound(vec.begin(),vec.end(),arr[i])-vec.begin();
            ans.push_back(idx);
            vec.erase(vec.begin()+idx);
            
        }
        return ans;
    }
};