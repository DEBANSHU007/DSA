class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        if(root->left==NULL && root->right==NULL)
        {
              return root->val;
        }
        bool l=evaluateTree(root->left);
        bool r=evaluateTree(root->right);
        if(root->val==2)
        {
            return l||r;
        }
        else if(root->val==3)
        {
            return l&&r;
        }
        return true;
    }
};