Node * insertAtTail(Node *head, int k) {
    // Write your code here
    if(head==NULL) return new Node(k,nullptr,nullptr);
    Node* tail = head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* newNode = new Node(k,tail,nullptr);
    newNode->prev=tail;
    tail->next=newNode;
    return head;
}
