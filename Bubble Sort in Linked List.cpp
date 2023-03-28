ListNode* sortList(ListNode* head) {
        ListNode* temp=head;
        while (temp!=NULL){
            ListNode* curr=head;
            ListNode* Next; 
            while (curr->next!=NULL){
                Next=curr->next;
                if (curr->val>Next->val){
                    int temp=Next->val;
                    Next->val=curr->val;
                    curr->val=temp;
                }
                curr=curr->next;
            }
            temp=temp->next;
        }
        return head;
    }
