Node * deleteLastNode(Node *head) {
    // Write your code here
    if(head==NULL||head->next==NULL){
        return NULL;
    }
    Node* tail = head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* prevv = tail->prev;
    tail->prev=nullptr;
    prevv->next=nullptr;
    delete(tail);
    return head;
}
