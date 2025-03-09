Node * deleteHead(Node *head) {
    // Write your code here.
    if(head==NULL || head->next ==NULL){
        return NULL;
    }
Node* prevv = head;
head=head->next;
head->prev=nullptr;
prevv->next=nullptr;
delete(prevv);
return head;
}
