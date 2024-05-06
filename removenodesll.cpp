class Solution {
public:
    ListNode* reverse(ListNode* head)
    {
        ListNode* cur=head;
        ListNode* prev=NULL;
        while(cur!=NULL)
        {
            ListNode* next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
    head = reverse(head);
    ListNode* cur = head;
    int maxi = head->val;
    ListNode* prev = head;
    head = head->next;
    while (head) {
        if (head->val >=maxi) {
            maxi = head->val;
            prev = head;
            head = head->next;
        } else {
            prev->next=head->next;
            head=prev->next;
        }
    }
    head = reverse(cur);
    return head;
    }
};