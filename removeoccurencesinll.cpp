class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        // code here
        unordered_map<int,int> mp;
        
        while(head!=NULL){
            mp[head->data]++;
            head=head->next;
        }
        vector<int> list;
       
        for(auto it :mp){
            if(it.second==1)
                list.push_back(it.first);
        }
        sort(list.begin(),list.end());
        
        if(list.empty())
            return NULL;
        
        Node *pHead = new Node(list[0]);
        Node *p1 = pHead;
        for(int i=1;i<list.size();i++){
            p1->next=new Node(list[i]);
            p1=p1->next;
                   
            
        }
        
        return pHead;
    }
};