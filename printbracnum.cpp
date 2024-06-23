class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        // Your code goes here
        int cnt=0;
        vector<int>ans;
        vector<int>final;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='(')
            {
                cnt++;
                ans.push_back(cnt);
                final.push_back(cnt);
            }
            else if(str[i]==')')
            {
                
                final.push_back(ans[ans.size()-1]);
                ans.pop_back();
            }
        }
        return final;
    }
};