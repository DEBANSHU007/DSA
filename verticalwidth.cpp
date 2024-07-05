class Solution {
  public:
    // Function to find the vertical width of a Binary Tree.
     void traverse(Node* root,  int count, set<int> &st ){
     
      if(root==NULL){
          count =0;
          return ;
      }
      
      traverse(root->left, count-1, st);
      st.insert(count);
      traverse(root->right, count+1, st);
      
      
  }
    int verticalWidth(Node* root) {
        // code here
        int count = 0;
        set<int> st;
        traverse(root,  count, st);
        
        return st.size();
    }
};