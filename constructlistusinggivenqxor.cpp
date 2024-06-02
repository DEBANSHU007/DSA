class Solution {
  public:
    vector<int> constructList(int q, vector<vector<int>> &queries) {
        // code here
        vector<int> v;
        int x=0;
        for(int i=q-1;i>=0;i--){
            if(!queries[i][0]) v.push_back(queries[i][1]^x);
            else{
                x^=queries[i][1];
            }
        }
        v.push_back(x);
        sort(v.begin(),v.end());
        return v;
    }
};