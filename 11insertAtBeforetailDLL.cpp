
Node * insertBeforeTail(Node *head, int k) {
    // Write your code here
    if(head==NULL) return new Node(k,nullptr,nullptr);
    Node* tail =head;
    while(tail->next!=NULL){
        tail=tail->next;
    }

    Node* back= tail->prev;
    
    Node* newNode = new Node(k,back,tail);
    tail->prev=newNode;
    back->next=newNode;
    return head;


}
