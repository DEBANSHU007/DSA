class Solution {
public:
    int solve(TreeNode*curr,TreeNode*parent)
    {
        if(curr==NULL)
        {
            return 0;
        }
        if(curr->left==NULL && curr->right==NULL)
        {
            if(parent!=NULL && parent->left==curr)
            {
                return curr->val;
            }
        }
        int left=solve(curr->left,curr);
        int right=solve(curr->right,curr);
        return left+right;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return solve(root,NULL);
    }
};