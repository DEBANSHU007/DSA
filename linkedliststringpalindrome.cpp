class Solution {
  public:
    bool compute(Node* head) {
        // Your code goes here
        string s="";
        while(head!=NULL)
        {
            s+=head->data;
            head=head->next;
        }
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};