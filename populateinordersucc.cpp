class Solution {
  public:

     Node*par = nullptr;
    void solve(Node*&root){
        if(!root){
            return;
        }
        solve(root->left);
        if(par){
            par->next = root;
        }
        par = root;
        solve(root->right);
    }
    void populateNext(Node *root) {
        solve(root);
    }
};