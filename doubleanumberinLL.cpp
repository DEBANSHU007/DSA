class Solution {
public:
    ListNode *reverse(ListNode *root)
    {
           ListNode* prev=NULL;
           ListNode* curr=root;
           while(curr)
           {
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
           }
           return prev;
    }
    ListNode* doubleList(ListNode* head)
    {
        ListNode* temp=head;
        ListNode *prev=head;
        int carry=0,sum;
        while(temp)
        {
            sum=carry+(temp->val*2);
            carry=sum/10;
            sum=sum%10;
            temp->val=sum;
            prev=temp;
            temp=temp->next;
        }
        if(carry)
        {
            prev->next=new ListNode(carry);
        }
        return head;
    }
    ListNode* doubleIt(ListNode* head) {
        head=reverse(head);
        head=doubleList(head);
        return reverse(head);
    }
};