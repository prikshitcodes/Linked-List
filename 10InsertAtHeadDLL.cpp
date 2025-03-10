
Node* insertAtFront(Node *head, int k) {
    // Write your code here.
    if(head==NULL){
        return new Node(k,nullptr,nullptr);
    }
    Node* temp = new Node(k,nullptr,head);
    head->prev=temp;
    return temp;
}
