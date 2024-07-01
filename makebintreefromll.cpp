TreeNode* solve(vector<int>&res,int i){
    if(i>=res.size())
    return NULL;
    TreeNode* root=new TreeNode(res[i]);
    root->left=solve(res,2*i+1);
    root->right=solve(res,2*i+2);
    return root;
}
void convert(Node *head, TreeNode *&root) {
     vector<int>res;
     while(head!=NULL){
         res.push_back(head->data);
         head=head->next;
     }
     root=solve(res,0);
}