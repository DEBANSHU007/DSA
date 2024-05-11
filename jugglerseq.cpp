class Solution {
  public:
    vector<int> jugglerSequence(int N) {
        // code here
        vector<int>ans;
        ans.push_back(N);
        
        while(N>1)
        {
            if(N%2 == 0)
            {
                N =  pow(N,1/2.0);
                ans.push_back(N);
            }
            else
            {
                N = pow(N,3/2.0);
                ans.push_back(N);
            }
        }
        
         return ans;
    }
};