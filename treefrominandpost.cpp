class Solution
{
    public:
    Node* buildBT(int inorder[], int postorder[], int inStart, int inEnd, int postStart, int postEnd) {
        if(inStart > inEnd)
            return NULL;

        Node* root = new Node(postorder[postEnd]);
        int root_candidate = root->data;
        int i = inStart;
      
        //YOu can optimize this by storing index of inorder values in a map for direct access
        for(; i<=inEnd; i++) {
            if(inorder[i] == root_candidate) {
                break;
            }
        }
        int leftSize  = i-inStart;
        int rightSize = inEnd-i;
      
        root->left = buildBT(inorder, postorder, inStart, i-1, postStart, postStart+leftSize-1);
        root->right  = buildBT(inorder, postorder, i+1, inEnd, postEnd-rightSize, postEnd-1);
      
        return root;
    }
    //Function to return a tree created from postorder and inoreder traversals.
    Node *buildTree(int in[], int post[], int n) {
        // Your code here
        Node* root = NULL;
        int inStart    = 0;
        int inEnd      = n-1;
        int postStart  = 0;
        int postEnd    = n-1;
        root           = buildBT(in, post, inStart, inEnd, postStart, postEnd);
        return root;
    }
};