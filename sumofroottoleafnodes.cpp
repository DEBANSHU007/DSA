class Solution {
public:
    bool isLeaf(TreeNode* root)
    {
        if(root->left == NULL && root->right == NULL)
            return true;
        return false;
    }
    int sumnode(TreeNode* root, int cur)
    {
        if(root == NULL)
            return 0;

        cur = cur*10 + root->val;
        
        if(isLeaf(root))
            return cur;

        return sumnode(root->left, cur) + sumnode(root->right, cur);

    }
    int sumNumbers(TreeNode* root) {
        return sumnode(root,0);
    }
};