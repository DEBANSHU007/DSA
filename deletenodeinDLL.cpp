class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        if (x == 1){
            head->next->prev = NULL;
            return head->next;
        }
        
        Node* temp = head;
        while (x - 1 > 0){
            temp = temp->next;
            x -= 1;
        }
        temp->prev->next = temp->next;

        if (temp->next){
            temp->next->prev = temp->prev;
        }
        return head;
    }
};