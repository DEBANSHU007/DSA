class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
     vector<int> serialize(Node *root) 
    {
        vector<int>sol;
        if(root==NULL)
        {
            return sol;
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            Node*n=q.front();
            q.pop();
            if(n==NULL)
            {
                sol.push_back(-1);
            }
            else
            {
                sol.push_back(n->data);
            }
            
            if(n!=NULL)
            {
                q.push(n->left);
                q.push(n->right);
            }
            
        }
        
        return sol;
        //Your code here
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
        if(A.size()==0)
        {
            return NULL;
        }
        
        int i=0;
        queue<Node*>q;
        Node*root=new Node(A[i]);
        i++;
        q.push(root);
        while(!q.empty())
        {
            Node*t=q.front();
            q.pop();
            if(A[i]==-1)
            {
                t->left=NULL;
                i++;
            }
            else
            {
                Node*temp=new Node(A[i]);
                i++;
                t->left=temp;
                q.push(temp);
            }
            if(A[i]==-1)
            {
                t->right=NULL;
                i++;
            }
            else
            {
                Node*temp=new Node(A[i]);
                i++;
                t->right=temp;
                q.push(temp);
            }
            
        }
        
        return root;
       //Your code here
    }

};