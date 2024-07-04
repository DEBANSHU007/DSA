class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
         if(!head->next) return nullptr;
    ListNode* ptr= head->next;
    int sum=0;
    while(ptr->val!=0) sum+= ptr->val, ptr=ptr->next;
    head->next->val= sum;
    head->next->next= mergeNodes(ptr);
    return head->next;
    }
};