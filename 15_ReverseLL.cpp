class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head ->next ==NULL){
            return head;
        }

        Node* last =NULL,
        Node* current=head;
        while(current!=NULL){
            last = current ->back;
            current->back=current->next;
            current->next=last;
            current=current->back;
        }
        return head;
    }
};
