void dfs(Node* root, vector<int>&v)
{
    if(root==NULL)
    {
        return ;
    }
    if(root->left!=NULL and root->right==NULL)
    {
        v.push_back(root->left->data);
    }
    if(root->left==NULL and root->right!=NULL)
    {
        v.push_back(root->right->data);
    }
    dfs(root->left,v);
    dfs(root->right,v);
}
vector<int> noSibling(Node* node)
{
    // code here
    vector<int>ans;
    dfs(node,ans);
    if(ans.size()==0)
    {
        return {-1};
    }
    sort(ans.begin(),ans.end());
    return ans;
}