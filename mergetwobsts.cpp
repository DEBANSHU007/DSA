class Solution {
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    void inorder(Node *root , vector<int> &res){
        if(root == NULL) return ;
        if(root->left) inorder(root->left,res);
        res.push_back(root->data);
        if(root->right) inorder(root->right,res);
    }
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
        vector<int> res;
        inorder(root1,res);
        inorder(root2,res);
        sort(res.begin(),res.end());
        return res;
    }
};