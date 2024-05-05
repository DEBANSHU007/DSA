class Solution{
  public:
   map<int,int>mp;
   void helper(Node *root,int dis)
   {
       mp[dis]+=root->data;
       if(root->left)helper(root->left,dis-1);
       if(root->right)helper(root->right,dis+1);
       
   }
    vector <int> verticalSum(Node *root) {
        // add code here.
        helper(root,0);
        vector<int>res;
        for(auto x:mp)
        {
            res.push_back(x.second);
        }
        return res;
    }
};