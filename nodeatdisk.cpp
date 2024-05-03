class Solution
{
    public:
    // function should print the nodes at k distance from root
    vector<int> Kdistance(struct Node *root, int k)
    {
      // Your code here
      vector<int>ans;
      if(k==0){
          return {root->data};
      }
      int c=0;
      queue<Node*>q;
      q.push(root);
      while(!q.empty()){
          int n=q.size();
          while(n--){
              Node* node=q.front();
              q.pop();
              if(c==k) ans.push_back(node->data);
              if(node->left)q.push(node->left);
              if(node->right)q.push(node->right);
          }
          c++;
      }
      return ans;
    }
};