class Solution {
  public:
    bool hasPathSum(Node *root, int target) {
        // Your code here
        if(!root)
            return false;
        if(!root->left && !root->right)
        {
            if(root->data==target) return true;
            return false;
        }
        return hasPathSum(root->left,target-(root->data)) || hasPathSum(root->right, target-(root->data));

    }
};