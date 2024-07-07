class Solution {
        void solve(struct Node* root, int target, vector<int>& res, vector<int>& temp) {
        if(!root) return;
        if(root->data == target) {
            res = temp;
            return;
        }
        
        temp.push_back(root->data);
        solve(root->left, target, res, temp);
        solve(root->right, target, res, temp);
        temp.pop_back();
    }
    

  public:
    // Function should return all the ancestor of the target node
    vector<int> Ancestors(struct Node *root, int target) {
        vector<int> res, temp;
        
        solve(root, target, res, temp);
        
        reverse(res.begin(), res.end());
        return res;
        // Code here
    }
};