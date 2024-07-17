class Solution {
  public:
    // Function to construct binary tree from parent array.
    Node *createTree(vector<int> parent) {
        // Your code here
    unordered_map<int,Node*> m;
    for(int i=0 ; i<parent.size() ; i++){
        if(m.find(i) == m.end())
            m[i] = new Node(i);
        if(m.find(parent[i]) == m.end())
            m[parent[i]] = new Node(parent[i]);
        if(m[parent[i]]->left == NULL)
            m[parent[i]]->left = m[i];
        else
            m[parent[i]]->right = m[i];
    }
    return m[-1]->left;
    }
};