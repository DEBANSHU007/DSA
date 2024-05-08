class Solution {
  public:
    void pie(Node* root,vector<vector<int>>&v,vector<int>& k)
    {
           if(root==NULL)return;
            k.push_back(root->data);
            
            if(root->left==NULL && root->right==NULL)
            {
               
                v.push_back(k);
                
            }
            pie(root->left,v,k);
            pie(root->right,v,k);
            k.pop_back();
    }
   vector<vector<int>> Paths(Node* root)
{
        vector<vector<int>>v;
        vector<int>k;
        pie(root,v,k);
        return v;
}
};