class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
        vector<int>ans;
        multimap<int,int>hashmap;
        for(int idx = arr.size() - 1; idx >= 0; idx--){
            int difference = abs(arr[idx]-x);
            hashmap.insert(make_pair(difference, arr[idx]));
        }
        
        for(auto iter = hashmap.begin();ans.size() < k;iter++){
            if(iter->first != 0){
                ans.push_back(iter -> second);
            }
        }
        return ans;
    }
};