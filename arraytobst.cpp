class Solution {
  public:
    Node* sorted(vector<int>&nums,int low,int high){
        if(low>high){
            return NULL;
        }
        int mid = (high-low)/2+low;
        Node* root = new Node(nums[mid]);
        root->left = sorted(nums,low,mid-1);
        root->right = sorted(nums,mid+1,high);
        return root;
    }
    Node* sortedArrayToBST(vector<int>& nums) {
        // Code here
        return sorted(nums,0,nums.size()-1);
        
    }
};